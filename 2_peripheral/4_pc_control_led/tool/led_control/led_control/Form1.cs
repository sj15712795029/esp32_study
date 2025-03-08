using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;
using System.IO.Ports;
using Newtonsoft.Json;

namespace led_control
{
    public partial class Form1 : Form
    {
        string hw_func = "HW";

        string operate_led_on = "LED_ON";
        string operate_led_off = "LED_OFF";

        const int PRINTFING_LOG = 0;
        const int PARSEING_JSON = 1;
        int serial_recv_status = PRINTFING_LOG;
        string recv_json_str;

        public const int WM_DEVICE_CHANGE = 0x219;
        public const int DBT_DEVICEARRIVAL = 0x8000;
        public const int DBT_DEVICE_REMOVE_COMPLETE = 0x8004;

        public Form1()
        {
            InitializeComponent();

            System.Windows.Forms.Control.CheckForIllegalCrossThreadCalls = false;
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            search_add_serial_port();

            cb_serial_baudrate.SelectedIndex = 0;
        }

        /* 串口搜索 */
        private void search_add_serial_port()
        {
            /* 更新串口按键状态 */

            /*------串口界面参数设置------*/
            int has_port = 0;
            //检查是否含有串口
            string[] str = SerialPort.GetPortNames();


            //添加串口
            foreach (string s in str)
            {
                has_port++;

                if (!cb_serial_port.Items.Contains(s))
                    cb_serial_port.Items.Add(s);
            }

            if (has_port == 0)
            {
                return;
            }
            //设置默认串口选项
            cb_serial_port.SelectedIndex = 0;

        }

        protected override void WndProc(ref Message m)
        {
            if (m.Msg == WM_DEVICE_CHANGE)        // 捕获USB设备的拔出消息WM_DEVICECHANGE
            {
                switch (m.WParam.ToInt32())
                {
                    case DBT_DEVICE_REMOVE_COMPLETE:    // USB拔出    
                        {
                            b_serial_open.Enabled = true;
                            b_serial_close.Enabled = false;
                        }
                        break;
                    case DBT_DEVICEARRIVAL:             // USB插入获取对应串口名称      
                        {
                            search_add_serial_port();
                        }
                        break;
                }
            }
            base.WndProc(ref m);

        }

        private void b_serial_send_Click(object sender, EventArgs e)
        {

            if (t_data_send.Text == "")
                MessageBox.Show("发送内容为空", "错误提示");
            else
            {
                if (serialPort1.IsOpen)
                    serialPort1.Write(t_data_send.Text);
                else
                    MessageBox.Show("先打开串口", "错误提示");
            }
        }

        private void b_serial_open_Click(object sender, EventArgs e)
        {
            if (!serialPort1.IsOpen)//串口处于关闭状态
            {
                try
                {

                    if (cb_serial_port.SelectedIndex == -1)
                    {
                        MessageBox.Show("Error: 无效的端口,请重新选择", "Error");
                        return;
                    }
                    string strSerialName = cb_serial_port.SelectedItem.ToString();

                    serialPort1.PortName = strSerialName;//串口号
                    serialPort1.BaudRate = Convert.ToInt32(cb_serial_baudrate.SelectedItem.ToString());//波特率
                    serialPort1.DataBits = 8;//数据位
                    serialPort1.StopBits = StopBits.One;
                    serialPort1.Parity = Parity.None;

                    //打开串口
                    serialPort1.Open();

                    b_serial_open.Enabled = false;
                    b_serial_close.Enabled = true;

                }
                catch (System.Exception ex)
                {
                    MessageBox.Show("Error:" + ex.Message, "Error");
                    return;
                }
            }
        }

        private void b_serial_close_Click(object sender, EventArgs e)
        {
            if (serialPort1.IsOpen)//串口处于关闭状态
            {
                serialPort1.Close();//关闭串口

                b_serial_open.Enabled = true;
                b_serial_close.Enabled = false;


            }
        }

        private void serialPort1_DataReceived(object sender, SerialDataReceivedEventArgs e)
        {
            if (serialPort1.IsOpen)
            {

                try
                {
                    string recv_data_string;
                    int recv_data_count = serialPort1.BytesToRead;
                    while (serialPort1.BytesToRead > 0)
                    {
                        recv_data_string = serialPort1.ReadLine();
                        if (recv_data_string.Contains("{") || (serial_recv_status == PARSEING_JSON))
                        {
                            serial_recv_status = PARSEING_JSON;
                            recv_json_str += recv_data_string;
                            if (recv_data_string.Contains("}"))
                            {
                                serial_recv_status = PRINTFING_LOG;
#if  CONSOLE_DEBUG
                                Console.WriteLine(recv_json_str);
#endif

                                json_status status = JsonConvert.DeserializeObject<json_status>(recv_json_str);

                                json_status_recv_parse(status);
                                recv_json_str = "";
                                //return;
                            }


                        }
                        else
                        {
                            t_data_recv.AppendText(recv_data_string + '\r' + '\n');
                        }
                    }

                }
                catch (Exception ex)
                {
                    return;
                }

                //                try
                //                {
                //                    byte[] read_data = new byte[serialPort1.BytesToRead];
                //                    serialPort1.Read(read_data, 0, read_data.Length);
                //                    string recv_data_string = Encoding.GetEncoding("GBK").GetString(read_data);


                //                    if (recv_data_string.Contains("{") || (serial_recv_status == PARSEING_JSON))
                //                    {
                //                        serial_recv_status = PARSEING_JSON;
                //                        recv_json_str += recv_data_string;
                //                        if (recv_data_string.Contains("}"))
                //                        {
                //                            serial_recv_status = PRINTFING_LOG;
                //#if  CONSOLE_DEBUG
                //                            Console.WriteLine(recv_json_str);
                //#endif

                //                            json_status status = JsonConvert.DeserializeObject<json_status>(recv_json_str);

                //                            json_status_recv_parse(status);
                //                            recv_json_str = "";
                //                            //return;
                //                        }


                //                    }
                //                    else
                //                    {
                //                        t_data_recv.AppendText(recv_data_string);
                //                    }


                //                }
                //                catch (Exception ex)
                //                {
                //                    return;
                //                }
            }
        }

        private void b_led_on_Click(object sender, EventArgs e)
        {
            json_construction_send(hw_func, operate_led_on, null, null, null, null, null, null);
        }

        private void b_led_off_Click(object sender, EventArgs e)
        {
            json_construction_send(hw_func, operate_led_off, null, null, null, null, null, null);
        }

        private void json_construction_send(string func, string operate, string param1, string param2, string param3, string param4, string param5, string param6)
        {
            json_commmand cmd = new json_commmand();
            cmd.FUNC = func;
            cmd.OPERATE = operate;
            cmd.PARAM1 = param1;
            cmd.PARAM2 = param2;
            cmd.PARAM3 = param3;
            cmd.PARAM4 = param4;
            cmd.PARAM5 = param5;
            cmd.PARAM6 = param6;
            string json_cmd = JsonConvert.SerializeObject(cmd);
#if  CONSOLE_DEBUG
            Console.WriteLine(json_cmd);
#endif
            if (serialPort1.IsOpen)
            {
                serialPort1.WriteLine(json_cmd);
            }
        }

        private void json_status_recv_parse(json_status status)
        {
#if  CONSOLE_DEBUG
            Console.WriteLine("----------json_status_recv_parse-------------");
            Console.WriteLine("json func:" + status.FUNC);
            Console.WriteLine("json operate:" + status.OPERATE);
            Console.WriteLine("json status:" + status.STATUS);
            Console.WriteLine("json param1:" + status.PARAM1);
            Console.WriteLine("json param2:" + status.PARAM2);
            Console.WriteLine("json param3:" + status.PARAM3);
            Console.WriteLine("json param4:" + status.PARAM4);
            Console.WriteLine("json param5:" + status.PARAM5);
            Console.WriteLine("----------json_status_recv_parse  end--------");
#endif
        }

        private void b_serial_send_Click_1(object sender, EventArgs e)
        {
            if (t_data_send.Text == "")
                MessageBox.Show("发送内容为空", "错误提示");
            else
            {
                if (serialPort1.IsOpen)
                    serialPort1.Write(t_data_send.Text);
                else
                    MessageBox.Show("先打开串口", "错误提示");
            }
        }
    }

    /* JSON定义 */
    public class json_commmand
    {
        public string FUNC { get; set; }
        public string OPERATE { get; set; }
        public string PARAM1 { get; set; }
        public string PARAM2 { get; set; }
        public string PARAM3 { get; set; }
        public string PARAM4 { get; set; }
        public string PARAM5 { get; set; }
        public string PARAM6 { get; set; }
    }

    public class json_status
    {
        public string FUNC { get; set; }
        public string OPERATE { get; set; }
        public string STATUS { get; set; }
        public string PARAM1 { get; set; }
        public string PARAM2 { get; set; }
        public string PARAM3 { get; set; }
        public string PARAM4 { get; set; }
        public string PARAM5 { get; set; }
        public string PARAM6 { get; set; }
    }
}
