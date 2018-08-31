#include<stdio.h>
#include"clock.h"
int main()

{
	while(1){
	printf("%02d:%02d:%02d ",hour(),mint(),s());//显示时分秒
	week();//显示星期
	printf("\n");
	delay(1);//延时1S
	system("clear");//清屏
	}
	return 0;
}
