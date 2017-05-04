#include<stdio.h>
int prime(int a,int i,int flag)
{


        if(a%i!=0)
            {
            flag=0;

            prime(a,i+1,flag);

            }
    else{
            flag=1;
    }
    if(i>a/2)
        return 1;
    else
        return 0;
     //  printf("%d",flag);     //}
   //2 return flag;
}

void main()
{
    int a,p,i=2,flag=1 ;
    scanf("%d",&a);
    p=prime(a,i,flag);
    if(p==0)
        printf("Number is prime%d",p);
    else
        printf("Number is not prime%d",p);
}
