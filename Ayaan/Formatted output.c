#include<stdio.h>
void main()
{
int i;
float f;
printf("Enter the number: ");
scanf("%d",&i);
printf("Formatted Inputs \n%d \n%3d \n%03d",i,i,i);
f=(float)i;
printf("\n%.2f",f);
}
