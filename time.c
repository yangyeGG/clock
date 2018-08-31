#include<stdio.h>
#include<time.h>
int hour()//显示小时
{
	int i;
	i = (((time(NULL)+28800)/3600) % 24);
	return i;
	

}


int mint()//显示分钟
{	
	int i;
	i = (time(NULL)/ 60)% 60;
	return i;
}


int s()//显示秒
{
	int i;
	i = time(NULL)%60;
	return i;

}
