#include<iostream>
using namespace std;
template <class T>
class student
{
    T a;
public:
    void get()
    {
        cin>>a;
    }
    T display()
    {
        return a;
    }
};

main()
{
    student<int> s1;
    student<char> s2;
    student<float> s3;
    s1.get();
    s2.get();
    cout<<"integer value is"<<s1.display();
    cout<<"character value is"<<s2.display();
    cout<<"float value is"<<s3.display();
}
