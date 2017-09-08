#include<iostream>
using namespace std;
#define max 1000
int top=-1;
int arr[max];

int pop(){
    return arr[top--];
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
   string n;
   int i,a,b,t;
    cout<<"Enter postfix notation\n";
    cin>>n;
    n=n+')';
    cout<<n<<endl;
    for(i=0;n[i] !=')';i++){
        if(n[i]>'0' && n[i]<'9'){
            t= n[i]-'0';
            push(t);
            cout<<"Push t "<<t<<endl;
        }
        else {
            a = pop();
            b = pop();
            cout<<"a"<<a<<" "<<"b"<<b<<" "<<n[i]<<endl;
            switch(n[i])
                {
                case '+':
                   push(a+b);
                   cout<<"push a+b "<<a+b<<endl;
                break;
                case '-':
                   push(b-a);
                break;
                case '*':
                   push(a*b);
                break;
                case '/':
                   push(b/a);
                   cout<<"push a/b "<<a/b<<endl;
                break;
                case '%':
                   push(b%a);
                break;
            //push(x n[i] y);
        }

    }
  }
  cout<<arr[top]<<endl;
}
