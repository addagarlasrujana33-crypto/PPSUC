//to perform simple intrest
#include<stdio.h>
int main()
{
	int p,t,r;
	float si;
	printf("enter the p,t,r, values");
	scanf("%d%d%d",&p,&t,&r);
	si=(p*t*r)/100;
	printf("the si is:%f",si);
	return 0;
}
