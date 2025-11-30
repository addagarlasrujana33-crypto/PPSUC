//write programe of addition
#include<stdio.h>
int main()
{
	int a[10][10], b[10][10], c[10][10], i, j;
	printf("enter elements into A matrix");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		scanf("%d", &a[i][j]);
	}
	printf("enter elements into B marix");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		scanf("%d", &b[i][j]);
	}
	printf("enter addition of 2 matrix\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		c[i][j]=a[i][j]+b[i][j];
	}
	printf("elements of matrix C\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
	 {
	   printf("%d", c[i][j]);
     }
	printf("\n");
    }
	return 0;
}
