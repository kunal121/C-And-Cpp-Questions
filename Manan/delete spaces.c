#include<stdio.h>
#include<string.h>
void main()
{
char a[20],i,t=1;
gets(a);
for(i=0;a[i]!='\0';i++)
{
	if(a[i]!=' ')
	{
		printf("%c",a[i]);
		t=0;
	}

}
}

