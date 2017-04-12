#include<iostream>
using namespace std;
int main(){
    try{
        int a=20;
        int b=34;
        if(b>a){
            throw 42;
        }
    }catch(int a){
        cout<<"b cannot be greater than a";
    }
}

