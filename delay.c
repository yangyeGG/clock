#include<stdio.h>
#include<time.h>
#include<stdlib.h>

//延时函数，延时接近1S
/*void delay()
{
	int i = 0,k;
	for(;i < 124911401;i++)
		{	
			for(k = 0;k<6;k++)
			{ ;}
	
		
		}

		
	
	
}*/

void delay(unsigned int n)//用时间戳形成1S延时
{
	long t1,t2;
	t1 = time(NULL);
		while(1)
		{
			t2 = time(NULL);
			if((t2-t1) == n)
			{
				break;
			}
		}

}
/*
int main()
{
	while(1){
	printf("%ld\n",time(NULL));
	delay();
	
	printf("%ld\n",time(NULL));
	}
	return 0;
}*/

