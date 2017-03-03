#include<iostream>
using namespace std;
class world
{
protected:
    string countries;
public:
    string continents;
};
class country:public world          // countries,continents are declared as public in world
{
public:
    string states;
};
class state:public country          // countries,continents,states are declared as public in world
{
public:
    string name;
    void input()
    {
        cin >> countries;
        cin >> continents;
        cin >> states;
        cin >> name;
    }
    void display()
    {
        cout << countries << endl;
        cout << continents << endl;
        cout << states << endl;
        cout << name;
    }
};
int main()
{
    state object;
    object.input();
    object.display();
}
