#include<stdio.h>
void main()
{
    int a,b,i,j,flag=0,palindrome=0,sum=0,number,n,rem,rev=0;
    printf("Enter the range");
    scanf("%d %d",&a,&b);
    for (i=a;i<b;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                flag=flag+1;
            }
        }
        if(flag==2)
        {
            if (i<10)
            {
                sum = sum + i;
            }
            if (i>10)
            {
                number=i;
                n=i;
                rev=0;
                while(n!=0){
                    rem=n%10;
                    rev=rev*10+rem;
                    n=n/10;
                }
                if(number==rev)
                {
                    sum = sum + i;
                }

            }
        }
        flag=0;
    }
    printf("%d",sum);
}
