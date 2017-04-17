#include<stdio.h>
int main()
{
	int i=0,j=0;
	char str[100],str1[100];
	printf("Enter string \n");
	scanf("%[^\n]",str);
	while(str[i]!='\0')
	{
		if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
			str1[j++]=str[i];
		i++;
	}
	str1[j]='\0';
	printf("\n** Now the string left **\n");
	printf("%s\n",str1);
}
