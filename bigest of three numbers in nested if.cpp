//program to check the bigest of three numbers
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter three values");
	scanf("%d %d %d", &a,&b,&c);
	if(a>b)
	{
		if(a>c)
	    {
	    	printf("a is big number");
		}
		else
		{
			printf("c is big number");
		}
	}
	else
	{
		if(b>c)
		{
			printf("b is big number");
		}
		else
		{
			printf("c is big number");
		}
	}
	return 0;
}
