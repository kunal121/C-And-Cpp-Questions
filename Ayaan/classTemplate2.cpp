#include<iostream>
using namespace std;
template <class type1,class type2>
class student
{
    type1 a;
    type2 b;
public:
    student(type1 x,type2 y)
    {
        a=x;
        b=y;
    }
    void display()
    {
        cout<<a<<endl;
        cout<<b<<endl;
    }
};
    main()
    {

        student<int,char> s1(7,'a');
        student<float,int>s2(9.6,15);
        s1.display();
        s2.display();
    }
