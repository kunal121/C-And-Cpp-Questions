#include<stdio.h>
int main() {
        long long int n;
        int i,c=0;
        scanf("%lld",&n);
        for(i=(n-1);i>0;i--){
            n = n * i;
        }
        while(n%10==0){
            c=c+1;
            n=n/10;
        }
        printf("%d",c);
}
