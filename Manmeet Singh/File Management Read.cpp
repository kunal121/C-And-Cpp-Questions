//Deals with fetching data from multiple files

#include<iostream>
#include<fstream>
using namespace std;

int main(){
    char str[30];
    ifstream in1("File1.txt");
    ifstream in2("File2.txt");

    while(in1){
    in1.getline(str,'\n');
    cout<<str<<endl;
    }

    while(!in2.eof()){
    in2.getline(str,'\n');
    cout<<str<<endl;
    }
}
