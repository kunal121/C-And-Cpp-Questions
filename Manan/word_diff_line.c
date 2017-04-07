#include<stdio.h>
#include<string.h>
void main()
{
int i=0,j;
char s[200];
printf("Enter string");
gets(s);
for(i=0;i<strlen(s);i++)
{
if(s[i]==' ')
s[i]='\n';

}
puts(s);
}
