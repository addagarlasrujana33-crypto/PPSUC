//to make the caluclator
#include<stdio.h>
int main()
{
	char op;
	int a,b;
	printf("enter an op");
	scanf("%c",&op);
	printf("enter the two numbers");
	scanf("%d%d", &a, &b);
	switch(op)
	{
		case'+':printf("result:%d", a+b);
	    break;
		case'-':printf("result:%d", a-b);
		break;
		case'*':printf("result:%d", a*b);
		break;
		case'/':printf("result:%d", a/b);
		break;
		default:
			printf("error! op in not valid");	
	}
	return 0;
}

