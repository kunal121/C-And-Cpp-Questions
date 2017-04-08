#include<stdio.h>
#include<string.h>
void main()
{
int i,n,d=0;
char a[20],b[20];
gets(a);
n=strlen(a);
for(i=0;i<n;i++)
	{
	    int j;
		for(j=i+1;j<n;j++)
		{

				if(d==a[j])
				a[j]=0;
				else if(a[i]==a[j] && a[j]!=0 && d!=a[j])
				{
				printf("%c have duplicate values\n",a[i]);
				d=a[i];
				}


		}
	}
}
