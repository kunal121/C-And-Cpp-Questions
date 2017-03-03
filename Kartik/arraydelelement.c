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
    printf(" enter the position u want to delete  : ");
    scanf("%d",&p);
    for(i=p-1;i<m;i++)
    {
        n[i]=n[i+1];
    }
    m--;

    for(i=0;i<m;i++)
    {
        printf(" \n enter the value of n[%d] : %d",i,n[i]);

    }
}
