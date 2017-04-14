#include<iostream>
#include<fstream>
using namespace std;
int main(){
    int a;
    ofstream out("kunal",ios::app);
    cin>>a;
    out<<a;
    out.close();
    ifstream in("kunal");
    cout<<in.tellg();
    in.close();

}
