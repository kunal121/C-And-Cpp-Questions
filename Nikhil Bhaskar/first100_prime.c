#include<stdio.h>
void main()
{
        int i=1,j,c=0,flag=0;
        while (c<101)
    {
        for (j=1;j<=i;j++)
        {
            if(i%j==0){
                flag=flag+1;
            }
        }
        if(flag==2){
            printf("%d , ",i);
            c=c+1;
        }
        i=i+1;
        flag=0;
    }

}
