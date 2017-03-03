#include<stdio.h>
main()
{
    int n[100],m,i,temp,r,p,te,k;
    printf(" enter the number of values u want to enter : ");
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        printf(" enter the value of n[%d] : ",i);
        scanf("%d",&n[i]);
    }
    printf(" enter the position u want to enter the value : ");
    scanf("%d",&p);

    printf(" enter the value : ");
    scanf("%d",&te);
    k=m;
    for(i=m-1;i>=p-1;i--)
    {
        n[k]=n[i];
        k--;
    }
    n[p-1]=te;

    for(i=0;i<=m;i++)
    {
        printf(" \n enter the value of n[%d] : %d",i,n[i]);

    }
}
