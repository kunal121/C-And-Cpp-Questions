#include<stdio.h>
#include<string.h>
int main()
{
         char names[5][10],temp[10];
         int i,j,n;
         printf("Enter the number of students:");
         scanf("%d",&n);
         for(i=0;i<n;i++)
         {
                     printf("Enter the names of students%d: ",i+1);
                     fflush(stdin);
                     gets(names[i]);
         }
          for(i=0;i<n;i++)
          {
                   for(j=0;j<n-i-1;j++)
                  {
                           if(strcmp(names[j],names[j+1])>0)
                          {
                                   strcpy(temp,names[j]);
                                   strcpy(names[j],names[j+1]);
                                   strcpy(names[j+1],temp);
                           }
                   }
             }
             for(i=0;i<n;i++)
             {
                                 printf("%s",names[i]);
                }
                return 0;
}
