#include<iostream>
#include<math.h>
using namespace std;

void bubble(int *a,int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
         }
    }
}
int binarySearch(int l,int r,int *a,int n,int num)
{
       if(r-1>l)
       {
        int mid;
        mid=floor((l+r)/2);
        if(a[mid]==num) {
           cout<<"The Position of the element is "<<mid+1<<"\n";
           return -1;
        }
        if(a[mid]>num)
        return binarySearch(l,mid-1,a,n,num);
        if(a[mid]<num)
        return binarySearch(mid+1,r,a,n,num);
       }
       return 0;
}
void displayEle(int *a,int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
    cout<<"Enter Number of elements\n";
    int n;
    cin>>n;
    int a[n];
    cout<<"Enter elements\n";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    bubble(a,n);
    cout<<"Enter Element to be searched\n";
    int x;
    cin>>x;
    displayEle(a,n);
    int result = binarySearch(0,n,a,n,x);
    if(result==-1){
            cout<<"Element found\n";
        }
        else{
            cout<<"Element not Found\n";
        }
}
