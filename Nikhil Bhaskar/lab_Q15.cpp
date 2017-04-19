#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main()
{
    //writing
    ofstream abc("file.txt");
    cout<<"enter department ";
    char dept[100];
    char name[100];
    //cout<<endl;


    cin.getline(dept,100);
    cout<<"enter name ";
    cin.getline(name,100);
 cin.ignore();//extracts input and discards it
    abc<<dept<<endl<<name;

    abc.close();
//reading
ifstream def("file.txt");
def.getline(dept,100);
cout<<dept<<endl;
def.getline(name,100);
cout<<name;
def.close();
}
