#include<stdio.h>
int main()
{
	int n,temp,sum=0;
	printf("enter the number");
	scanf("%d",&n);
	while(n!=0)
	{
	  temp=n%10;
	  sum=sum+temp;
	  n=n/10;
    }
	  printf("the sum of digits:%d", sum);
      
	
	return 0;
	
}
