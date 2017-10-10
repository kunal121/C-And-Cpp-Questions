#include<iostream>
#include<string.h>
using namespace std;
class stack1
{
private:
    char str[1000],a,b,k;
    int top=-1;
    int i,j,n,m,s,t,flag=0,ay[1000];
public:
    void get()
    {
        cout<<"enter the string: ";
        cin>>str;
        n=strlen(str);

    }
    void push(char t)
    {
        top++;
        ay[top]==t-'0';
        //cout<<t-'0'<<endl;
        //cout<<top<<endl;
    }
    int pop()
    {
        return ay[top--];

    }
    void out()
    {
        i=0;
        while(i<n)
        {
            switch(str[i])
            {
            case '+':
                a=pop();
                b=pop();
                //cout<<a-'0'<<" "<<b-'0'<<endl;
                k=a+b;
                push(k);
                break;
            case '-':
                break;
            case '*':
                break;
            case '/':
                break;
            case '^':
                break;
            default:
                push(str[i]);
                break;

            }
            i++;
        }


    }
    void display()
    {
        cout<<ay[top];
    }

};
int main()
{
    stack1 s;
    s.get();
    s.out();
    s.display();
    return 0;
}
