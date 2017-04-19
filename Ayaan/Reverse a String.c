#include<stdio.h>
void reverse(char str[]);
int main()
{
	char str[100],res[100];
	int i;
	printf("Enter the string:");
	gets(str);
	reverse(str);
}
void reverse(char str1[100])
{
	char swap;
	int i=0,j;
	j=strlen(str1)-1;
	while(i<j)
	{
		swap=str1[j];
		str1[j]=str1[i];
		str1[i]=swap;
		j--;
		i++;
	}
	puts(str1);

}
