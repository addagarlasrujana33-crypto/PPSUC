//write the program for string comparision
#include<stdio.h>
#include<string.h>
int main()
{
	char s1[50], s2[30];
	int i, j, flag=0;
	printf("\n enter the string 1:");
	gets(s1);
	printf("\n enter the string 2:");
	gets(s2);
	for(i=0,j=0;s1[i]!='\0'&&s2[j]!='\0';i++,j++)
	if(s1[i]!=s2[j])
	{
		flag++;
		break;
	}
	if(flag==0)
	printf("\n two strings are equal");
	else
	printf("\n two strings arer not equal");
	return 0;
}
