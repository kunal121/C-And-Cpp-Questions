#include<stdio.h>
int  main()
{
	int a[100],mid,i,beg,end,num,p;
	printf("enter range");
	scanf("%d",&p);
	for(i=0;i<p;i++)
	{
		scanf("%d",&a[i]);
	}
 printf("enter no. u want to search");
 scanf("%d",&num);
 beg=0;
 end=p-1;
 while(beg<=end)
 {
    	mid=(beg+end)/2;
    	if(a[mid]==num)
    	{
    		printf("%d is found at %d",num,mid);
    		break;
	}
	else if(num>a[mid])
	{
		beg=mid+1;
	}
	else
		end=mid-1;
}
return 0;
}
