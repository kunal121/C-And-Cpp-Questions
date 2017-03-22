#include<stdio.h>
void main()
{
int i,count=0;
printf(" Enter the number");
scanf("%d",&i);
while(i!=0)
    {
        i /= 10;             // n = n/10
        count++;
    }

    printf("Number of digits: %d",count);
}
