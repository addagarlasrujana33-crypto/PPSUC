//program to find smallest(min)element array
#include<stdio.h>
int main()
{
	int a[10], i, small;
	printf("enter array elements");
	for(i=0;i<10;i++)
	{
		scanf("%d", &a[i]);
	}
	small=a[0];
	for(i=1;i<=10;i++)
	{
		if(small>a[i])
		{
			small=a[i];
		}
	}
	printf("smallest elements is %d\n",small);
	return 0;
}
