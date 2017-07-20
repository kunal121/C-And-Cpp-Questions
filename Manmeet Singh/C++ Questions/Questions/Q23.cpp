#include<iostream>
using namespace std;
void searchEle(int *a,int n){
     int pos=-1,p=1;
     while(p!=-1){
        cout<<"Enter Element or Enter -1 to Exit\n";
        cin>>p;
        if(p!=-1){
            pos=-1;
        for(int i=0;i<n;i++){
            if(a[i]==p){
                pos=i;
                break;
            }
        }
        if(pos==-1){
            cout<<"Element not found\n";
        }
        else{
            cout<<"Position is "<<pos+1<<endl;
        }
        }
     }
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
    searchEle(a,n);
}
