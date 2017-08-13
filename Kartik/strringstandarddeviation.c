#include<stdio.h>
#include<math.h>
void main()
{
    float j,k[100],mean=0.0,sum=0.0,sd;
    int n,i;
    printf("Enter total terms : ");
    scanf("%d",&n);
    printf("Enter elements : ");
    for(i=0;i<n;i++)
    {
        scanf("%f",&k[i]);
        mean=mean+k[i];
    }
    mean=mean/n;
    for(i=0;i<n;i++)
    {
        sum=sum+pow((k[i]-mean),2);
    }
    sd=sqrt(sum/(n-1));
    printf("Standard Deviation is : %f",sd);
}
