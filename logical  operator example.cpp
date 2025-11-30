#include<stdio.h>
int main()
{
	int a=5, b=2;
	printf("\n &&operator:the both conditions is true %d", (a<5)&&(a<=5));
	printf("\n ||operator:one condition is true",(a>b)||(a<=b));
	printf("\n!operator:reverse the state of the operator", !(a!=b));
	return 0;
}
