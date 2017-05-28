#include <stdio.h>
void main()
{
    int  i, count = 0;
   int num;
    printf("enter the number:");
    scanf("%d", &num);
    while (num != 0)
    {
        if (num & 1 == 1)
        {
            break;
        }
        else
        {
            count++;
            num = num >> 1;

        }
    }
    printf("\n%d", count);
}
