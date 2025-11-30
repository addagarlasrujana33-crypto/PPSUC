//to perform logical operator
#include<stdio.h>
int main()
{
	int a=2,b=5,c=6;
	printf("%d\n",(a<b&&b>c));//1&&0=0
	printf("%d\n",(a<b||b>c));//1||0=1
	printf("%d\n",(a<b&&b>c));//!(1&&0)=!(0)=1
	return 0;
}
