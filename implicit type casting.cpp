//to oerform implicit type casting
#include<stdio.h>
int main()
{
	int num1=10;
	float num2=5.5;
	float result;
	result=num1+num2;
	//implicit cast from int to float
	printf("the result is :%f\n",result);
	return 0;
}
