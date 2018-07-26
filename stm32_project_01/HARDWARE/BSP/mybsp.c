#include "mybsp.h"
#include "rtc.h"
#include <time.h> 

static long long basetime = 0;



unsigned char bsp_init(void)
{
   unsigned char ret = 0;
   struct RTCTime rt;
   struct tm localtm;
   
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);//�жϷ�������
	delay_init(168);  	//ʱ�ӳ�ʼ��

	uart_init(115200);  //���ڳ�ʼ��
	LED_Init();         //LED��ʼ��

   u8 My_RTC_Init(void)


   RTC_Get_Time(&rt);

   localtm.tm_year = rt.year+ 100;
   localtm.tm_mon  = rt.month -1;
   localtm.tm_mday = rt.date;
   localtm.tm_hour = rt.hour;
   localtm.tm_min  = rt.min;
   localtm.tm_sec  = rt.sec;
   localtm.tm_wday = rt.week-1;
   localtm.tm_yday = 0;
   localtm.tm_isdst = 0;
   basetime = mktime(&localtm)

   return ret;
}









