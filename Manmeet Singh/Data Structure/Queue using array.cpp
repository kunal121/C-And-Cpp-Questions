#include<iostream>
using namespace std;
#define max 1000
int f=-1;
int r=-1;
int arr[max];

void popFront(){
    if(r==f){
        f=-1;
        r=-1;
    }
    else{
        f++;
    }
}
void pushBack(int x){
    if(r!=max){
        if(f==-1){
        f=0;
        arr[++r]= x;
        }
        else{
            arr[++r]= x;
        }
    }
    else{
        cout<<"Overflow Condition ie Queue is full\n";
    }
}

void display(){
    if(f=-1){
        cout<<"Empty Queue\n";
    }
    else{
       for(int i=f;i<=r;i++){
            cout<<arr[i]<<" ";
        }cout<<endl;
    }

}
int main(){
   int choice,x=0,n;
    while(x==0){
        cout<<"Enter your choice\n1. Push\n2. Pop\n3. Display\n4. Exit\n";
        cin>>choice;
        switch(choice) {
        case 1 : cout<<"Enter number to be Pushed\n";
                 cin>>n;
                 pushBack(n);
                 break;
        case 2 : popFront();
                 break;
        case 3: display();
                 break;
        case 4 : x=1;
                 break;
        default : cout<<"Invalid Input\n";
        }
    }
}
