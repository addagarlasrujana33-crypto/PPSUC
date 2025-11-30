#include<stdio.h>
int main()
{
	int n, original, reversed=0, remainder;
	printf("enter an integer value");
	scanf("%d", &n);
	original=n;
	while(n!=0)
	{
		remainder=n%10;
		reversed=reversed*10+remainder;
		n=n/10;
	}
	if(original==reversed)
	printf("%d is palindrom", original);
	else
	printf("%d is not palindrom", original);
	return 0;
}
