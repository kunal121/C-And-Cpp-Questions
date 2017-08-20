#include <stdio.h>
int checkPrime(int n)
    {
int i,j,k=0;
    for(i=2;i<n;i++)
    {
        if((i==2||i==3||i==5||i==7||i==11)||(i%2!=0&&i%3!=0&&i%5!=0&&i%7!=0&&i%11!=0))
        {
        	//printf("i=%d\n",i);
        for(j=2;j<n;j++)
        {
        	//printf("j=%d\n",j);
         if((j==2||j==3||j==5||j==7||j==11)||(j%2!=0&&j%3!=0&&j%5!=0&&j%7!=0&&j%11!=0))
        {
             if(n==i+j)
             {
                 printf("%d %d\n",i,j);
                 k++;
             }
             else
             {
            
             }
         }
        }
        }   
    }
    if(k==0)
        printf("No");
        return 0;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    scanf("%d",&n);
    checkPrime(n);
    return 0;
}
