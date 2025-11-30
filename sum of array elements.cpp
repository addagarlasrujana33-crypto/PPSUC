//sum of array elements
#include<stdio.h>
int main()
{
	int i, sum=0;
	int marks[5];
	printf("enter array elements");
	for(i=0;i<=4;i++)
	{
		scanf("%d", marks[i]);
	}
	for(i=0;i<4;i++)
	{
		sum = sum + marks[i];
	}
	printf("%d\n", sum);
	return 0;
}
