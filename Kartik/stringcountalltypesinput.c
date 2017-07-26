#include<stdio.h>
#include<string.h>
void main()
{
char a[25];
int vow=0,con=0,dig=0,space=0,spl=0,b,i;
printf("Enter the string\n");
gets(a);
b=strlen(a);
for(i=0;i<b;i++)
{
if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
{
vow++;
}
else if(a[i]==' ')
{
space++;
}
else if(a[i]>=33 && a[i]<=47||a[i]>=58 && a[i]<=64)
{
spl++;
}
else if(a[i]>=48 && a[i]<=57)
{
dig++;
}
else
con++;
}


printf("\nvowel= %d",vow);
printf("\nconsonent= %d",con);
printf("\ndigits= %d",dig);
printf("\nspecial character= %d",spl);
printf("\nspaces= %d",space);
}
