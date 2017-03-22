#include<iostream>
using namespace std;
int main()
{
    int num1 , num2;
    char op;
    cout<<"Welcome to Calculator"<<endl;
    cout<<"Enter two numbers"<<endl;
    cin>>num1>>num2;
    cout<<"Enter an operator"<<endl;
    cin>>op;
    try
    {
        switch(op)
        {
        case '/':
            try{
                if(num2 !=0)
                    cout<<"Result is "<<(float)num1/num2<<endl;
                else
                    throw "Arithmetic Exception";
            }
            catch(const char* msg)
            {
                cout<<msg<<endl;
            }
            break;
        case '+':
            cout<<"Result is "<<num1+num2<<endl;
            break;
        case '-':
            cout<<"Result is "<<num1-num2<<endl;
            break;
        case '*':
            cout<<"Result is "<<num1*num2<<endl;
            break;
        default:
            throw "Unknown operation";
        }
    }
    catch(const char* msg)
    {
        cout<<msg<<endl;
    }
}
