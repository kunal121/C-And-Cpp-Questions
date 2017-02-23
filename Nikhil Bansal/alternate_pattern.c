/*
    C program to check if the binary conversion of a number has an alternating bit pattern.
*/
#include<stdio.h>
void main()
{
    int n,rem,rem1,c=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    while(n!=0)
    {
        rem = n&1;
        if(rem == 1)
        {
            n = n>>1;
            rem1= n&1;
            if(rem == rem1){
                    c=c+1;
                printf("Number does not have alternate binary pattern");
                break ;
            }
        }
        else if(rem == 0)
        {
            n = n>>1;
            rem1= n&1;
            if(rem == rem1){
                    c=c+1;
                printf("Number does not have alternate binary pattern");
                break ;
            }

        }
    }
    if(c==0)
        printf("Number has an alternating binary pattern");
}
