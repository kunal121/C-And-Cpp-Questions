#include<stdio.h>
#include<math.h>
int  main()
{int a[100],sum=0,n,i;
float sd, var,mean,p=0;
printf("enter the no. of values");
scanf("%d",&n);
for(i=0;i<n;i++)
{printf("enter values");
scanf("%d",&a[i]);
sum+=a[i];}
mean=sum/n;
printf("%f",mean);
for(i=0;i<n;i++)
p+=((a[i]-mean)*(a[i]-mean));
var=p/(n-1);
sd=(sqrt(var));
printf("\n%f",sd);
return 0;}
