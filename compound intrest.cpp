//to perform compound intrest
#include<stdio.h>
int main()
{
	int p,t,r,n;
	float ci;
	printf("enter the p,t,r,n, values");
	scanf("%d%d%d%d",&p,&t,&r,&n);
    ci=p*(1+r/n)^t;
	printf("the ci is:%f",ci);
	return 0;
}
