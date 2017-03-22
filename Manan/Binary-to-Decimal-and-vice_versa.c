#include<stdio.h>
#include<math.h>
void main()
{
	int b=1,n,i,j=1,a=0,binary=0,rem,dec=0;
	printf("1.For binary to decimal\n2.For decimal to binary");
	scanf("%d",&i);
	printf("Enter the no");
	scanf("%d",&n);

	switch(i)
	{
		case 1:while(n!=0)
			{
				rem=n%10;
				dec=dec+(rem*b);
				n=n/10;
				b=b*2;
			}
			printf("Decimal no is=%d\n",dec);
			break;
		case 2: while(n!=0)
			{	
				a=n%2;
				binary=binary+(a*j);
				n=n/2;
				j=j*10;
				
			}
			printf("%d\n",binary);
		default: break;
	
	}
}
				 
