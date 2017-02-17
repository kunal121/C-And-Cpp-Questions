#include<stdio.h>
void main()
{
    char a[100];
    int space=0,i;
    printf("Enter the string ");
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==32)
        {
            space=space+1;
            while(a[i]==32)
            {
                i=i+1;
            }
        }
    }
    printf("White Spaces = %d",space);
}
