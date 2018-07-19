#include "bsp.h"
#include "rtc.h"





unsigned char bsp_init(void)
{
    unsigned char ret = 0;
    struct TIME rt;

    
    RTC_Get_Time(&rt);


    
    return ret;
}









