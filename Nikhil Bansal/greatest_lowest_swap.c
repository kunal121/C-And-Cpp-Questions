#include<stdio.h>
void main(){
    int a,b=0,c,d,temp,minimum,maximum;
    printf("Enter size of  array ");
    scanf("%d",&a);
    int arr[a];
    printf("Enter the elements ");
    for(i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    minimum=a[0];
    maximum=a[0];
    for(i=1,i<a;i++){
        if(a[i]>maximum){
            maximum=a[i];
            c=i;
        }
        if(a[i]<minimum){
            minimum=a[i];
            d=i;
        }
    }
    temp=a[c];
    a[c]=a[d];
    a[d]=temp;

}
