#include<stdio.h>
int func1(int n)
{	printf("Function1 called with passing value %d\n",n);
return n;
}
int func2(int n)
{	printf("Function2 called with passing %d,returns double.\n",n);
return n*2;
}
int func3(int n)
{	printf("Function3 called with passing value %d,returns square.\n",n);
return n*n;
}
int (*fptr[3])(int);
void main()
{	int val;
fptr[0]=func1;
fptr[1]=func2;
fptr[2]=func3;
for(int i=0;i<3;i++)
{	val=(*fptr[i])(4);
printf("Returned : %d\n\n",val);
}
return 0;
}
