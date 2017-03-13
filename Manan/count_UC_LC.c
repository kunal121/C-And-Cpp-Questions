//No of upper case or lower case
#include<stdio.h>
void main()
{
	int a=0,b=0;
	char ch;
        while(ch!='*')
	{
		printf("Enter a character");
		scanf(" %c",&ch);
		if(ch>=65 && ch<=91)
		a=a+1;
		else
		b=b+1;
		
	}
printf("No of upper case letters=%d\nNo of lower case letters=%d\n",a,b-1);
}
