#include<iostream>
using namespace std;
class student
{
    string name;
    int marks[5];
    int total=0;
    public:
        void input()
        {
            cin>>name;
            for(int i=0;i<5;i++)
            {
                cin>>marks[i];
                total = total + marks[i];
            }
        }

        void display()
        {
            cout<<"\n"+name<<"\n"<<total;
        }
};
int main()
{
    int n;
    cout<<"Enter no of students";
    cin>>n;
    student s[n];
    for(int i=0;i<n;i++)
    {
    cout<<"Input data of student ";
    cout<<i+1;
    s[i].input();
}for(int i=0;i<n;i++)
    {
    cout<<"Data of student";
    cout<<i+1;
    s[i].display();
}
}
