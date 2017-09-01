#include<stdio.h>
void main()
{
    int N,i,j,arr[10][10],sum,*p;

    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }


    sum=matsum(arr,N);
    printf("%d",sum);
}

int matsum(int *p,int n)
{
    int i,j,sum=0,dig=0,fin;

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            sum=sum+*(*(p+i)+j);
        }
    }
    for(i=0;i<n;i++)
    {
        dig=dig+**p[n-1-i][i];
    }

    fin=sum-dig;
    return fin;
}
