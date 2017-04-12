#include<stdio.h>
void main()
{
    void fibonacci();
    printf("0,1");
    fibonacci();
    printf(".....so on");
}
void fibonacci()
{
        int a=0,b=1,c;
        while(c<200)
        {
            c=a+b;
            printf(",%d",c);
            a=b;
            b=c;
        }
}
