#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int i=0,j=0,flag=0,alen=0,blen=0,count=0,z=0,l=0,fl=0,lmp;
    char a[100],b[100],str[100];
    gets(a);
    gets(b);
    alen=strlen(a);
    blen=strlen(b);
    i=0;

        for(j=0;j<blen;j++)
        {
            l=0;
            if(a[i]==b[j])
            {
                //count++;
                //printf("%c %c\n",a[i],b[j]);
                z=i;
                while(fl!=alen)
                {
                    str[l]=b[z];
                    l++;
                    z++;
                    fl++;
                }
                lmp=strcmp(str,a);
                    if(lmp==0)
                    {
                        printf("Yes");
                    }

            }
        }

    printf("pos %d\n",j);
   printf("%d\n",count);
    for(i=0;i<alen;i++)
    {
        printf("%c",str[i]);
    }
    return 0;
}
