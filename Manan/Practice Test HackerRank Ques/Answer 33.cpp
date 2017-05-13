#include <iostream>

using namespace std;
void divide(int n,int m)
    {
    if(m==0)
        throw m;
    else
        cout<<n/m;
}

int main() {
    int num1,num2;
    cin>>num1>>num2;
    try{
    divide(num1,num2);
    }
    catch(int)
        {
        cout<<"Division by zero Exception";
    }
    return 0;
}
