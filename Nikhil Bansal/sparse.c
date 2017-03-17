#include<stdio.h>
void main(){
    int a,c=0;
    scanf("%d",&a);
    while(a!=0){
            c=c+1;
        if(a&1==1){
            a=a>>1;
            if(a&1==1){
                printf("FALSE");
                break;
            }
        }
        else{
            a=a>>1;
        }
    }
    if(c==8)
        printf("TRUE");
}
