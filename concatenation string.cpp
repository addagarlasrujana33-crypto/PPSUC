#include<stdio.h>
#include<string.h>
int main()
{
	char s1[50],s2[30];
	printf("\n enter a string 1:");
	gets(s1);
	printf("\n enter a string 2:");
	gets(s2);
	int i,j;
	i=strlen(s1);
	for(j=0;s2[i]='\0';i++,i++)
	{
		s1[i]=s2[j];
	}
	s1[i]='\0';
	printf("\n concated string is:%s",s1);
	return 0;
}
