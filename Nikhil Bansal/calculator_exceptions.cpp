#include<iostream>
using namespace std;
class calculator
{
public:
    double a;
    double b;
    void input();
    double add();
    double sub();
    double divide();
    double multiply();
};
void calculator::input()
{
    cin >> a >> b;
}
double calculator::add()
{
    try
    {
        double sum = a + b;
        if(sum == 0)
            throw 0;
        else
            cout << "Result is " << sum << endl;
    }
    catch(...)
    {
        cout << "Illegal Exception:Sum is 0!!";
    }
}
double calculator::sub()
{
    try
    {
        double diff;
        diff = a - b;
        if(diff < 0)
            throw 0;
        else
            cout << "Result is " << diff << endl;
    }
    catch(...)
    {
        cout << "Illegal Exception:Difference is negative!!";
    }
}
double calculator::divide()
{
    try
    {
        double div = a / b;
        if(div < 1)
            throw 0;
        else
            cout << "Result is " << div << endl;
    }
    catch(...)
    {
        cout << "Illegal Exception:Divide is between 0 and 1!!";
    }
}
double calculator::multiply()
{
    try
    {
        double multi = a * b;
        if(multi < 1)
            throw 0;
        else
            cout << "Result is " << multi << endl;
    }
    catch(...)
    {
        cout << "Illegal Exception:Multiplication is between 0 and 1!!";
    }
}
int main()
{
    cout << "Calculator :\nEnter two numbers : ";
    calculator obj;
    obj.input();
    char a;
    cout << "\nEnter operator\n\t+\t-\n\n\t*\t/\n\n\t";
    cin >> a;
    switch(a)
    {
        case '+' : obj.add();
                    break;
        case '-' : obj.sub();
                    break;
        case '*' : obj.multiply();
                    break;
        case '/' : obj.divide();
                    break;
        default : cout << "Invalid Operator\n";
    }
}
