#include<stdio.h>
void main()
{
    int x=10;
    float y=2.0;

    int *px=&y;
    float *py=&x;
    // type casting error done purposely
    printf("Value of px(y)= %d\nValue of py(x)= %d",*px,*py);
}
