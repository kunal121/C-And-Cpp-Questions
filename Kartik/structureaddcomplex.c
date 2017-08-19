#include <stdio.h>
struct complexNo
{
int real,img;
};
int main()
{
  	struct complexNo first,second,temp;
   	printf("Enter the values of a and b where a + ib is the first complex number.\n");
   	printf("enter the value of a : ");
   	scanf("%d", &first.real);
   	printf("enter the value of b : ");
   	scanf("%d", &first.img);
   	printf("Enter the values of x and y where x + iy is the second complex number.\n");
   	printf("enter the value of x : ");
   	scanf("%d", &second.real);
   	printf("enter the value of y : ");
   	scanf("%d", &second.img);
   	sum(first,second,temp);
   return 0;
}
void sum(struct complexNo first,struct complexNo second,struct complexNo temp)
{
    	temp.real = first.real + second.real;
    	temp.img = first.img + second.img;
    	if ( temp.img >= 0 )
    	{
        		printf("Sum of two complex numbers = %d + %di\n", temp.real,temp.img);
    	}
   	else
   	{
      		printf("Sum of two complex numbers = %d %di\n", temp.real, temp.img);
   	}
}

