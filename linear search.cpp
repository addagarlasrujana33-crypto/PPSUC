//to write the program of liner search
#include<stdio.h>
int main()
{
	int a[20], i, key, n, found=0;
	int position;
	printf("how many elements?");
	scanf("%d", &n);
	printf("enter array elements");
	for(i=0;i<n;++i)
	{
		scanf("%d", &a[i]);
	}
	printf("\n enter element to search:");
	scanf("%d", &key);
	for(i=0;i<n;i++)
	{
		if(key==a[i])
		{
			found=1;
			position=i;
		}
    }
    if(found==1)
    printf("elements found at index %d", position);
    else
    printf("element not found");
    return 0;
}
