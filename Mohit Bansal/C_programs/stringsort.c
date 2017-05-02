#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int i,n;
void main()
{
    scanf("%d",&n);
    scanf("%d",&n);
    char a[n][50],b[50];
    for(i=0;i<=n;i++)
   {
       gets(a[i]);
   }
   while(a[i]!='\0')
   {

   if(strcmp(a[i],a[i+1])==0)
    {
      printf("str1 is equal to str2");
    }
   for(i=0;i<=n;i++)
   {
       if(strcmp(a[i],a[i+1])>0);
       {
           strcpy(b[i],a[i+1]);
           strcpy(a[i+1],a[i]);
           strcpy(a[i],b[i]);
       }
   }
    for(i=0;a[i]!='\0';i++)
    {
        puts(a[i]);
    }


}
}

