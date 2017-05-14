#include<stdio.h>
#include<math.h>
void main()
{
    int n,z=0,x,y=1,i=0,r=0,q=0;
    printf("Enter no = ");
    scanf("%d",&n);
    y=1;
    while(n!=0)
    {

        x=n%2;
        z=z+x*y;
        y=y*10;

        i++;

        n=n/2;
    }
     while(q<i)
    {
        while((z&1))
        {
            r++;

        z=z>>1;
        }

        z=z>>1;
        q++;

    }
    if(r==1)
    {
        printf("\npower of 2");
    }

    else
    {
        printf("\nnot power of 2");
    }
}
