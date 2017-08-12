 #include<stdio.h>
#include<string.h>
void main()
{
int i,alen,blen,count=0,j,pos=0;
char a[50],b[50];
printf("Enter the main string\n");
gets(a);
printf("Enter the part to be searched\n");
gets(b);
alen=strlen(a);
//printf("%d alen\n",alen);
blen=strlen(b);
//printf("%d blen\n",blen);
for(i=0;i<blen;i++)
{
for(j=0;j<alen;j++)
{
if(b[i]==a[j])
{
count++;
pos=j;
break;
}
}
}
//printf("%d count\n",count);
if(count==blen)
{
    printf("Match found and position is %d",pos-blen+2);
}
else
{
    printf("Match not found");
}
}
