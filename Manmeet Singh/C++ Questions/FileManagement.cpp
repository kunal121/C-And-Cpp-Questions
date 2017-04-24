//Deals with Read and write operations on a file

#include<iostream>
#include<fstream>
using namespace std;

int main(){
    char name[30];
    int roll;
    ofstream out("File.txt");
    cin.getline(name,30);
    cin>>roll;
    out<<name<<endl<<roll;
    out.close();

    ifstream in("File.txt");
    in.getline(name,30);
    in>>roll;
    cout<<name<<endl<<roll;
    in.close();

}
