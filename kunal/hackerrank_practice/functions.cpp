#include <stdio.h>
void  four(int *a)
  {
    int i;

        printf("%d\n",a[3]);


}  /*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int main() {
    int i,j,temp,a[100];
    for(i=0;i<4;i++)
        {
        scanf("%d",&a[i]);
    }
    for(i=0;i<4-1;i++)
        {
        for(j=0;j<4-1-i;j++)
            {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
     four(a);

    return 0;
}

