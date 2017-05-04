#include<stdio.h>
int main()
{
		char str[10],i=0,length;
		printf("Enter the string:");
		for(i=0;str[i]!='\0';i++)
		{
			gets(str);
		}
		while(str[i]!='\0')
			i++;
		length=i;

		printf("The length of string is:%d",length);
}
