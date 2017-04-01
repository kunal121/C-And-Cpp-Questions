#include<stdio.h>
void uppercase(char string[],int n)
    {
        int i;
        for(i=0;string[i]!='\0';i++)
        {
            if(string[i]>96 && string[i]<123)
                string[i]=string[i]-32;
        }
        puts(string);
    }
void lowercase(char string[],int n)
    {
        int i;
        for(i=0;string[i]!='\0';i++)
        {
            if(string[i]>64 && string[i]<91)
                string[i]=string[i]+32;
        }
        puts(string);
    }
void main()
{
    char string[100],i,choice;
    printf("Enter the string ");
    gets(string);
    printf("Enter the choice\n1.UpperCase\t2.LowerCase ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1 :  uppercase(string,100);
                  break;
        case 2 :  lowercase(string,100);
                  break;
        default : printf("Enter valid choice");
    }

}
