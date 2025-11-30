#include<stdio.h>
int main()
{
	int i, n;
	long long fact=1;
	printf("enter an integer");
	scanf("%d", &n);
	if(n<1)
	{
		printf("fcatorial is not existed for negative values");
	}
	else
	{
		for(i=1;i<=n;i++)
		{
			fact=fact*i;
		}
		printf("factorial of %d:%lld\n", n, fact);
	}
	return 0;
}
