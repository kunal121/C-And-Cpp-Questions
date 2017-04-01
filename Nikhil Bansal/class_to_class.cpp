#include<iostream>
using namespace std;
class student1
{
public:
    int roll;
    int marks[3];
    void getdata()
    {
        int i;
        cout << "ENTER ROLL" << endl;
        cin >> roll;
        cout << "ENTER MARKS " << endl;
        for(i=0;i<3;i++)
        {
            cin >> marks[i];
        }
    }
};
class student2
{
    int roll;
    float avg;
public:
    student2()
    {
        roll=0;
        avg=0;
    }
    student2(student1 st)
    {
        roll = st.roll;
        int i;
        for(i=0;i<3;i++)
        {
            avg = avg + st.marks[i];
        }
        avg = avg / 3;
    }
    void display()
    {
        cout << roll << endl << avg;
    }
};
int main()
{
    student1 st1;
    student2 st2;
    st1.getdata();
    st2 = st1;
    st2.display();
    return 0;
}
