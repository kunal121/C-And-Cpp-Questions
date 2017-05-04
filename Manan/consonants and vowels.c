#include<stdio.h>
#include<string.h>
void main()
{
char a[20],c[20],v[20];
int i,j=0,k=0;
gets(a);
strlwr(a);
for(i=0;i<strlen(a);i++)
{
if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u')
{
v[k]=a[i];
k++;
}
else
{
c[j]=a[i];
j++;
}
}
c[j]='\0';
v[k]='\0';
puts(c);
puts(v);

}

