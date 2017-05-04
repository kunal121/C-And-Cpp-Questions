/**
*	This is solution to hackerrank problem : Angry Professor of implementation domain
*
**/
#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int a,p;
    int n;
    int k;
    if (t>=1 && t<=10)
      {
       for(a = 0; a < t; a++)
       {

            scanf("%d %d",&n,&k);
            if (n>=1 && n<=1000){
                if (k>=1 && k<=n){
                int arr[n],i;
                p = 0;
                for(i = 0; i < n; i++)
                {
                     scanf("%d",&arr[i]);
                     if (arr[i]>=-100 && arr[i]<=100){
                     if(arr[i]<=0)
                     p++;
                     }
                }
                if(p<k)
                    printf("YES\n");
                else
                    printf("NO\n");
                }
            }
        }
    }

}
