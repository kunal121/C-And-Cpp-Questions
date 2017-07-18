#include<iostream>
using namespace std;
    int n,*a;
void insertEle(){
    int p,x;
    cout<<"Enter Pos and Number\n";
    cin>>p>>x;
    p-=1;
    for(int i=n+1;i>p;i--){
        a[i]=a[i-1];
    }
    a[p]=x;
    n+=1;
}
void deleteEle(){
    int p,m;
    cout<<"Enter\n1) Pos\n2) Number\n";
    cin>>m;
    switch(m){
    case 1: cout<<"Enter Pos\n";
        cin>>p;
        p-=1;
        for(int i=p;i<n;i++){
            a[i]=a[i+1];
        }
        n-=1;
        break;
     case 2: cout<<"Enter Element\n";
        int pos;
        cin>>p;
        for(int i=0;i<n;i++){
            if(a[i]==p){
                pos=i;
                break;
            }
        }
        for(int i=pos;i<n;i++){
            a[i]=a[i+1];
        }
        n-=1;
        break;
        }
}
void findEle(){
        cout<<"Enter Element\n";
        int pos,p;
        cin>>p;
        for(int i=0;i<n;i++){
            if(a[i]==p){
                pos=i;
                break;
            }
        }
        cout<<pos+1<<endl;
}
void display(){
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
            }
        cout<<endl;
}

int main(){
    int x,f=1;
    cout<<"Enter Number of elements\n";
    cin>>n;
    a = new int[n];
    cout<<"Enter elements\n";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    while(f==1){
        cout<<"Enter option\n1) Insert at specific Pos\n2) Delete value\n3) Find element location\n4) Display linear array\n5) Exit\n";
        cin>>x;
        switch(x){
        case 1: insertEle();
                break;
        case 2: deleteEle();
                break;
        case 3: findEle();
                break;
        case 4: display();
                break;
        case 5: f=0;
                break;
        default: cout<<"Wrong input";
        }
    }

}
