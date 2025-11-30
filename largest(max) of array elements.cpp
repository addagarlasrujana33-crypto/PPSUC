//program to find largest(max)element array
#include<stdio.h>
int main()
{
	int a[10], i, large;
	printf("enter array elements");
	for(i=0;i<10;i++)
	{
		scanf("%d", &a[i]);
	}
	large=a[0];
	for(i=1;i<=10;i++)
	{
		if(large<a[i])
		{
			large=a[i];
		}
	}
	printf("largest elements is %d\n",large);
	return 0;
}
