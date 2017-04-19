#include<stdio.h>
#include<string.h>
int main()
{
	char str[10],str1[10],str2[10];
	int i=0,j=0,l;
	printf("Enter first string:");
	gets(str);
	printf("Enter second string:");
	gets(str1);

	while(str[i]!='\0')
	{
		str2[j]=str[i];
		i++;
		j++;
	}
	i=0;
	while(str1[i]!='\0')
	{
		str2[j]=str1[i];
		i++;
		j++;

	}

str2[j]='\0';
printf("%s",str2);

}
