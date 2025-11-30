//to perform the grades
#include<stdio.h>
int main()
{
	int n=90;
	if(n>95 && n<85)
	{
		printf("A grade");
	}
	else if(n>85 && n<75)
	{
		printf("B grade");
	}
	else if(n>75 && n<65)
	{
		printf("C grade");
	}
	else
	{
		printf("D grade");
	}
	return 0;
}
