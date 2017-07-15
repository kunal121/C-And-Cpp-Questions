#include<stdio.h>
void main()
{
    int n,i = 3, count, c;
    printf("Enter the number of prime numbers required\n");
    scanf("%d",&n);
    if ( n >= 1 )
    {
      printf("First %d prime numbers are :\n",n);
      printf("2\n");
    }

    for ( count = 2 ; count <= n ;  )
    {
      for ( c = 2 ; c <= i - 1 ; c++ )
      {
         if ( i%c == 0 )
            break;
      }
      if ( c == i )
      {
          j=0;
          a[j]=i;
            printf("%d\n",i);
            count++;
            j++
      }
      i++;
    }
    for(i=n-1;i>=0)
}
