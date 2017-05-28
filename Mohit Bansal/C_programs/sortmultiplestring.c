#include<stdio.h>
#include<string.h>
void main()
{
    char a[20][20],temp[20];
    int i=0,n,j;
    printf("how many string req");
    scanf("%d",&n);
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%s",a[i]);
        printf("\n");
        printf("sorted list\n");
    for (i = 0 ; i< ( n - 1 ); i++)
  {
    for (j = 0 ; j < n - i - 1; j++)
    {
       if(strcmp(a[j],a[j+1])>0)
        {
            strcpy(temp,a[j]);
            strcpy(a[j],a[j+1]);
            strcpy(a[j+1],temp);
        }
    }
  }

    for(i=0;i<n;i++)
        puts(a[i]);
}

