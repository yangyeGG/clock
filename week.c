#include<stdio.h>
#include<time.h>
void week()//显示星期
{

	int i;
	i = (time(NULL)/24/60/60) % 7;
	
	switch(i)
	{
		case 0:printf("星期四");
			break;
		case 1:printf("星期五");
			break;

		case 2:printf("星期六");
			break;
		case 3:printf("星期日");
			break;
		case 4:	
			 printf("星期一");
			break;
		case 5:	
			 printf("星期二");
			break;
		case 6 :	
			 printf("星期三");
			break;
	}
}
