#include<iostream>
using namespace std;
#define max 1000
int top=-1;
int arr[max];
//void init(){
  //  top = -1;
//}
void pop(){
    arr[top--];
}
void push(int x){
    arr[++top]= x;
}

void display(){
    for(int i=0;i<=top;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
int main(){
   int choice,f=0,n;
    while(f==0){
        cout<<"Enter your choice\n1. Push\n2. Pop\n3. Display\n4. Exit\n";
        cin>>choice;
        switch(choice) {
        case 1 : cout<<"Enter number to be Pushed\n";
                 cin>>n;
                 push(n);
                 break;
        case 2 : pop();
                 break;
        case 3: display();
                 break;
        case 4 : f=1;
                 break;
        default : cout<<"Invalid Input\n";
        }
    }
}
