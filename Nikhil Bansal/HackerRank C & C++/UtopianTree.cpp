/**
*	This is solution to hackerrank problem : Utopian tree of Implementation domain
*	Link to question : https://www.hackerrank.com/challenges/utopian-tree
**/
#include<stdio.h>
int main(){
    int a,i,j,n,height;
    scanf("%d",&a);
    for (i=0;i<a;i++)
        {
        height=0;
          scanf("%d",&n);
          for(j=0;j<=n;j++)
          {
              
                if(j%2==0)
                    height = height + 1;
                else
                    height = height * 2;
          }
        printf("%d\n",height);
        }
}
