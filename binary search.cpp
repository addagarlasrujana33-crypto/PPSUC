// write program of binary search
#include<stdio.h>
int main()
{
	int i, n, pos=0, low=0, mid=0, key;
	printf("enter n value");
	scanf("%d", &n);
	int a[n];
	int high = n-1;
	for(i=0;i<=n-1;i++)
	{
	  scanf("%d", &a[i]);
    } 
    printf("enter key");
	scanf("%d",&key);
	for(i=0;i<=n-1;i++)
	while(low<=mid)
	{
	 key=(low+mid)/2;
	 if(key==a[mid])
	{
		pos=mid;
		break;
	}
    else if(key<a[mid])
	{
		high=mid-1;
	 } 
	else{
		low=mid+1;
	}
    }
	printf("element found at position:%d", pos);
	return 0;
}
