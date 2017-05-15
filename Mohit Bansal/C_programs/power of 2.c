#include<stdio.h>
void main(){
int num,count=0;
printf("enter number");
scanf("%d",&num);
while(num!=0){
    if(num&1)
        count++;
    num=num>>1;
}

if(count==1){
    printf("power of 2");

}
else{
    printf("not");
}
}

