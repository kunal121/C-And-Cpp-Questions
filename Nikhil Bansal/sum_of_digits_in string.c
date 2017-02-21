// C program to calculate the digits in the string entered.
#include<stdio.h>
void main()
{
    char string[100];
    printf("Enter the string ");
    scanf("%s",string);
    int i,sum=0,length = strlen(string);
    for(i=0;i<length;i++)
    {
        if(string[i]>47 && string[i]<58)
        {
            sum = sum + string[i] - 48;

        }
    }
    printf("%d\n",sum);

}
