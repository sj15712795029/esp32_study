#include <stdio.h>


/* Define trace levels */
#define WL_TRACE_LEVEL_NONE    0          /* No trace messages to be generated    */
#define WL_TRACE_LEVEL_ERROR   1          /* Error condition trace messages       */
#define WL_TRACE_LEVEL_WARNING 2          /* Warning condition trace messages     */
#define WL_TRACE_LEVEL_INFO   3           /* Debug messages for info            */
#define WL_TRACE_LEVEL_DEBUG   4          /* Full debug messages                  */
#define WL_TRACE_LEVEL_VERBOSE 5          /* Verbose debug messages               */

#define MAX_TRACE_LEVEL        6

#define DEFAULT_LOG_LEVEL WL_TRACE_LEVEL_INFO

#define LOG_COLOR_YELLOW "\033[40;33m"
#define LOG_COLOR_RED "\033[40;31m"
#define LOG_COLOR_BLUE "\033[40;36m"
#define LOG_COLOR_PURPLE "\033[40;35m"
#define LOG_COLOR_RESET "\033[0m"


#define LOGCOMMON(tag, fmt, ...) printf(LOG_COLOR_BLUE"[ %s ] "LOG_COLOR_RESET fmt "\n", tag, ##__VA_ARGS__);
#define LOGWARN(tag, fmt, ...) printf(LOG_COLOR_BLUE"[ %s ] "LOG_COLOR_RESET LOG_COLOR_YELLOW fmt LOG_COLOR_RESET"\n", tag, ##__VA_ARGS__);
#define LOGERR(tag, fmt, ...) printf(LOG_COLOR_BLUE"[ %s ] "LOG_COLOR_RESET LOG_COLOR_RED fmt LOG_COLOR_RESET"\n", tag, ##__VA_ARGS__);

#define WL_LOGE(tag,fmt,...) do{ if(DEFAULT_LOG_LEVEL >= WL_TRACE_LEVEL_ERROR){LOGERR(tag,fmt,##__VA_ARGS__);} }while(0)
#define WL_LOGW(tag,fmt,...) do{ if(DEFAULT_LOG_LEVEL >= WL_TRACE_LEVEL_WARNING){LOGWARN(tag, fmt,##__VA_ARGS__);} }while(0)
#define WL_LOGI(tag,fmt,...) do{ if(DEFAULT_LOG_LEVEL >= WL_TRACE_LEVEL_INFO){LOGCOMMON(tag, fmt,##__VA_ARGS__);} }while(0)
#define WL_LOGD(tag,fmt,...) do{ if(DEFAULT_LOG_LEVEL >= WL_TRACE_LEVEL_DEBUG){LOGCOMMON(tag, fmt,##__VA_ARGS__);} }while(0)
#define WL_LOGV(tag,fmt,...) do{ if(DEFAULT_LOG_LEVEL >= WL_TRACE_LEVEL_VERBOSE){LOGCOMMON(tag, fmt,##__VA_ARGS__);} }while(0)
