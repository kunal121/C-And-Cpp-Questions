#include<iostream>
#include <string>
using namespace std;
int professor_id=0;
int student_id=0;
class Person{
public:
string name;
int age,score,id;
virtual void putdata()=0;
virtual void getdata()=0;
};

class Student: public Person{
    int marks[6],t=0;
    public:
        void getdata(){
            cin>>name>>age;
            for(int i=0;i<6;i++)
                {
                cin>>marks[i];
                t+=marks[i];
            }
        }
        void putdata(){
            cout<<name<<" "<<age<<" "<<t<<" "<<++student_id<<endl;
        }
};
class Professor: public Person{

    int publications;
    public:
        void getdata(){
            cin>>name>>age>>publications;

        }
        void putdata(){
            cout<<name<<" "<<age<<" "<<publications<<" "<<++professor_id<<endl;
        }
};
int main()
{
int n, val;
cin>>n;
Person *per[n];
for(int i = 0;i < n;i++)
{
cin>>val;
if(val == 1)
{

per[i] = new Professor;
}
else per[i] = new Student;
per[i]->getdata();
}
for(int i=0;i<n;i++)
per[i]->putdata();
return 0;
}
