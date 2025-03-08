
namespace led_control
{
    partial class Form1
    {
        /// <summary>
        /// 必需的设计器变量。
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// 清理所有正在使用的资源。
        /// </summary>
        /// <param name="disposing">如果应释放托管资源，为 true；否则为 false。</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows 窗体设计器生成的代码

        /// <summary>
        /// 设计器支持所需的方法 - 不要修改
        /// 使用代码编辑器修改此方法的内容。
        /// </summary>
        private void InitializeComponent()
        {
            this.components = new System.ComponentModel.Container();
            this.groupBox1 = new System.Windows.Forms.GroupBox();
            this.b_serial_close = new System.Windows.Forms.Button();
            this.b_serial_open = new System.Windows.Forms.Button();
            this.cb_serial_baudrate = new System.Windows.Forms.ComboBox();
            this.cb_serial_port = new System.Windows.Forms.ComboBox();
            this.label2 = new System.Windows.Forms.Label();
            this.label1 = new System.Windows.Forms.Label();
            this.groupBox4 = new System.Windows.Forms.GroupBox();
            this.b_led_off = new System.Windows.Forms.Button();
            this.b_led_on = new System.Windows.Forms.Button();
            this.g_log_func = new System.Windows.Forms.GroupBox();
            this.b_serial_send = new System.Windows.Forms.Button();
            this.t_data_send = new System.Windows.Forms.TextBox();
            this.t_data_recv = new System.Windows.Forms.TextBox();
            this.b_log_clear = new System.Windows.Forms.Button();
            this.serialPort1 = new System.IO.Ports.SerialPort(this.components);
            this.groupBox1.SuspendLayout();
            this.groupBox4.SuspendLayout();
            this.g_log_func.SuspendLayout();
            this.SuspendLayout();
            // 
            // groupBox1
            // 
            this.groupBox1.Controls.Add(this.b_serial_close);
            this.groupBox1.Controls.Add(this.b_serial_open);
            this.groupBox1.Controls.Add(this.cb_serial_baudrate);
            this.groupBox1.Controls.Add(this.cb_serial_port);
            this.groupBox1.Controls.Add(this.label2);
            this.groupBox1.Controls.Add(this.label1);
            this.groupBox1.Location = new System.Drawing.Point(20, 20);
            this.groupBox1.Margin = new System.Windows.Forms.Padding(2);
            this.groupBox1.Name = "groupBox1";
            this.groupBox1.Padding = new System.Windows.Forms.Padding(2);
            this.groupBox1.Size = new System.Drawing.Size(340, 80);
            this.groupBox1.TabIndex = 1;
            this.groupBox1.TabStop = false;
            this.groupBox1.Text = "串口配置区";
            // 
            // b_serial_close
            // 
            this.b_serial_close.BackgroundImageLayout = System.Windows.Forms.ImageLayout.None;
            this.b_serial_close.Enabled = false;
            this.b_serial_close.Image = global::led_control.Properties.Resources.串口关闭;
            this.b_serial_close.Location = new System.Drawing.Point(250, 20);
            this.b_serial_close.Margin = new System.Windows.Forms.Padding(2);
            this.b_serial_close.Name = "b_serial_close";
            this.b_serial_close.Size = new System.Drawing.Size(71, 52);
            this.b_serial_close.TabIndex = 5;
            this.b_serial_close.UseVisualStyleBackColor = true;
            this.b_serial_close.Click += new System.EventHandler(this.b_serial_close_Click);
            // 
            // b_serial_open
            // 
            this.b_serial_open.BackgroundImageLayout = System.Windows.Forms.ImageLayout.None;
            this.b_serial_open.Image = global::led_control.Properties.Resources.串口打开;
            this.b_serial_open.Location = new System.Drawing.Point(165, 20);
            this.b_serial_open.Margin = new System.Windows.Forms.Padding(2);
            this.b_serial_open.Name = "b_serial_open";
            this.b_serial_open.Size = new System.Drawing.Size(71, 52);
            this.b_serial_open.TabIndex = 4;
            this.b_serial_open.UseVisualStyleBackColor = true;
            this.b_serial_open.Click += new System.EventHandler(this.b_serial_open_Click);
            // 
            // cb_serial_baudrate
            // 
            this.cb_serial_baudrate.AutoCompleteCustomSource.AddRange(new string[] {
            "115200",
            "921600"});
            this.cb_serial_baudrate.DropDownStyle = System.Windows.Forms.ComboBoxStyle.DropDownList;
            this.cb_serial_baudrate.FormattingEnabled = true;
            this.cb_serial_baudrate.Items.AddRange(new object[] {
            "115200",
            "921600"});
            this.cb_serial_baudrate.Location = new System.Drawing.Point(55, 53);
            this.cb_serial_baudrate.Margin = new System.Windows.Forms.Padding(2);
            this.cb_serial_baudrate.Name = "cb_serial_baudrate";
            this.cb_serial_baudrate.Size = new System.Drawing.Size(92, 20);
            this.cb_serial_baudrate.TabIndex = 3;
            // 
            // cb_serial_port
            // 
            this.cb_serial_port.DropDownStyle = System.Windows.Forms.ComboBoxStyle.DropDownList;
            this.cb_serial_port.FormattingEnabled = true;
            this.cb_serial_port.Location = new System.Drawing.Point(55, 20);
            this.cb_serial_port.Margin = new System.Windows.Forms.Padding(2);
            this.cb_serial_port.Name = "cb_serial_port";
            this.cb_serial_port.Size = new System.Drawing.Size(92, 20);
            this.cb_serial_port.TabIndex = 2;
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(6, 53);
            this.label2.Margin = new System.Windows.Forms.Padding(2, 0, 2, 0);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(53, 12);
            this.label2.TabIndex = 1;
            this.label2.Text = "波特率：";
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(6, 20);
            this.label1.Margin = new System.Windows.Forms.Padding(2, 0, 2, 0);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(53, 12);
            this.label1.TabIndex = 0;
            this.label1.Text = "串口号：";
            // 
            // groupBox4
            // 
            this.groupBox4.Controls.Add(this.b_led_off);
            this.groupBox4.Controls.Add(this.b_led_on);
            this.groupBox4.Location = new System.Drawing.Point(20, 139);
            this.groupBox4.Margin = new System.Windows.Forms.Padding(2);
            this.groupBox4.Name = "groupBox4";
            this.groupBox4.Padding = new System.Windows.Forms.Padding(2);
            this.groupBox4.Size = new System.Drawing.Size(321, 126);
            this.groupBox4.TabIndex = 8;
            this.groupBox4.TabStop = false;
            this.groupBox4.Text = "LED测试区";
            // 
            // b_led_off
            // 
            this.b_led_off.BackgroundImageLayout = System.Windows.Forms.ImageLayout.Zoom;
            this.b_led_off.Image = global::led_control.Properties.Resources.蓝灯灭;
            this.b_led_off.Location = new System.Drawing.Point(180, 29);
            this.b_led_off.Margin = new System.Windows.Forms.Padding(2);
            this.b_led_off.Name = "b_led_off";
            this.b_led_off.Size = new System.Drawing.Size(69, 81);
            this.b_led_off.TabIndex = 1;
            this.b_led_off.UseVisualStyleBackColor = true;
            this.b_led_off.Click += new System.EventHandler(this.b_led_off_Click);
            // 
            // b_led_on
            // 
            this.b_led_on.BackgroundImageLayout = System.Windows.Forms.ImageLayout.Zoom;
            this.b_led_on.Image = global::led_control.Properties.Resources.蓝灯亮;
            this.b_led_on.Location = new System.Drawing.Point(26, 29);
            this.b_led_on.Margin = new System.Windows.Forms.Padding(2);
            this.b_led_on.Name = "b_led_on";
            this.b_led_on.Size = new System.Drawing.Size(73, 81);
            this.b_led_on.TabIndex = 0;
            this.b_led_on.UseVisualStyleBackColor = true;
            this.b_led_on.Click += new System.EventHandler(this.b_led_on_Click);
            // 
            // g_log_func
            // 
            this.g_log_func.Controls.Add(this.b_serial_send);
            this.g_log_func.Controls.Add(this.t_data_send);
            this.g_log_func.Controls.Add(this.t_data_recv);
            this.g_log_func.Controls.Add(this.b_log_clear);
            this.g_log_func.Location = new System.Drawing.Point(375, 20);
            this.g_log_func.Margin = new System.Windows.Forms.Padding(2);
            this.g_log_func.Name = "g_log_func";
            this.g_log_func.Padding = new System.Windows.Forms.Padding(2);
            this.g_log_func.Size = new System.Drawing.Size(509, 544);
            this.g_log_func.TabIndex = 9;
            this.g_log_func.TabStop = false;
            this.g_log_func.Text = "串口调试区";
            // 
            // b_serial_send
            // 
            this.b_serial_send.BackgroundImageLayout = System.Windows.Forms.ImageLayout.Zoom;
            this.b_serial_send.Image = global::led_control.Properties.Resources.发送;
            this.b_serial_send.Location = new System.Drawing.Point(419, 490);
            this.b_serial_send.Margin = new System.Windows.Forms.Padding(2);
            this.b_serial_send.Name = "b_serial_send";
            this.b_serial_send.Size = new System.Drawing.Size(86, 54);
            this.b_serial_send.TabIndex = 3;
            this.b_serial_send.UseVisualStyleBackColor = true;
            this.b_serial_send.Click += new System.EventHandler(this.b_serial_send_Click_1);
            // 
            // t_data_send
            // 
            this.t_data_send.Font = new System.Drawing.Font("宋体", 10.8F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.t_data_send.Location = new System.Drawing.Point(4, 491);
            this.t_data_send.Margin = new System.Windows.Forms.Padding(2);
            this.t_data_send.Multiline = true;
            this.t_data_send.Name = "t_data_send";
            this.t_data_send.ScrollBars = System.Windows.Forms.ScrollBars.Both;
            this.t_data_send.Size = new System.Drawing.Size(411, 54);
            this.t_data_send.TabIndex = 2;
            this.t_data_send.Text = "shop220811498.taobao.com";
            // 
            // t_data_recv
            // 
            this.t_data_recv.Location = new System.Drawing.Point(4, 18);
            this.t_data_recv.Margin = new System.Windows.Forms.Padding(2);
            this.t_data_recv.Multiline = true;
            this.t_data_recv.Name = "t_data_recv";
            this.t_data_recv.ScrollBars = System.Windows.Forms.ScrollBars.Both;
            this.t_data_recv.Size = new System.Drawing.Size(503, 434);
            this.t_data_recv.TabIndex = 1;
            // 
            // b_log_clear
            // 
            this.b_log_clear.Location = new System.Drawing.Point(4, 456);
            this.b_log_clear.Margin = new System.Windows.Forms.Padding(2);
            this.b_log_clear.Name = "b_log_clear";
            this.b_log_clear.Size = new System.Drawing.Size(500, 30);
            this.b_log_clear.TabIndex = 0;
            this.b_log_clear.Text = "清空调试日志";
            this.b_log_clear.UseVisualStyleBackColor = true;
            // 
            // serialPort1
            // 
            this.serialPort1.DataReceived += new System.IO.Ports.SerialDataReceivedEventHandler(this.serialPort1_DataReceived);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(897, 577);
            this.Controls.Add(this.g_log_func);
            this.Controls.Add(this.groupBox4);
            this.Controls.Add(this.groupBox1);
            this.Name = "Form1";
            this.Text = "Form1";
            this.Load += new System.EventHandler(this.Form1_Load);
            this.groupBox1.ResumeLayout(false);
            this.groupBox1.PerformLayout();
            this.groupBox4.ResumeLayout(false);
            this.g_log_func.ResumeLayout(false);
            this.g_log_func.PerformLayout();
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.GroupBox groupBox1;
        private System.Windows.Forms.Button b_serial_close;
        private System.Windows.Forms.Button b_serial_open;
        private System.Windows.Forms.ComboBox cb_serial_baudrate;
        private System.Windows.Forms.ComboBox cb_serial_port;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.GroupBox groupBox4;
        private System.Windows.Forms.Button b_led_off;
        private System.Windows.Forms.Button b_led_on;
        private System.Windows.Forms.GroupBox g_log_func;
        private System.Windows.Forms.Button b_serial_send;
        private System.Windows.Forms.TextBox t_data_send;
        private System.Windows.Forms.TextBox t_data_recv;
        private System.Windows.Forms.Button b_log_clear;
        private System.IO.Ports.SerialPort serialPort1;
    }
}

