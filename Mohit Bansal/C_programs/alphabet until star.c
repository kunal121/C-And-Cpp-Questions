#include<stdio.h>
void main(){
char ch;
int count=0,cl=0,cu=0;
while(1)
{
printf("enter alphabet");
scanf("  %c",&ch);
if(ch=='*')
break;
else if (ch>='a'&&ch<='z')
    cl++;
    else cu++;
}
printf("%d\t%d",cu,cl);
}
