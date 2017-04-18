#include<stdio.h>
#include<string.h>
void main()
{
    int n,i,j;
    printf("How many names you want to enter? ");
    scanf("%d",&n);
    scanf("%d",&n);
    char names[n][20],temp[20];
    for(i=0;i<n;i++)
    {
        gets(names[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(strcmp(names[j],names[j+1])>0)
            {
                strcpy(temp,names[j]);
                strcpy(names[j],names[j+1]);
                strcpy(names[j+1],temp);
            }
        }
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
        puts(names[i]);
    }
}
