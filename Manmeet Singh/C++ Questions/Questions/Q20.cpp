#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ifstream o;
    o.open("abc.txt");
    ofstream o2;
    o2.open("abc2.txt", ios::app);
    char ch;
    while (o.eof()==0)  {
        o.get(ch);
        o2<<ch;
    }
    return 0;
}

