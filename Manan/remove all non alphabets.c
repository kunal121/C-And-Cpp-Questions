#include<stdio.h>
#include<string.h>
void main()
{
char a[200];
int l,i;
gets(a);
l=strlen(a);
for(i=0;a[i]!='\0';i++)
{
	if(a[i]<97 || a[i]>122){
            int j;
	   for(j=i;a[j]!='\0';j++)
	    {
		a[j]=a[j+1];

	    }
	l--;
i--;
	}
}

for(i=0;i<l;i++)
printf("%c",a[i]);
}
