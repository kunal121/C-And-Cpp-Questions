#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
class address
    {
    public:
    int add,l,b,h,l1,b1,h1,l2,b2,h2;
    string city,state;
  void input()
      {
      cin>>add>>city>>state>>l>>b>>h>>l1>>b1>>h1>>l2>>b2>>h2;
  }
    void display()
        {
        cout<<"House No="<<add<<endl<<"City="<<city<<endl<<"State="<<state<<endl<<"Address is:"<<endl<<"Room Details=1"<<endl<<"Length="<<l<<endl<<"Breath="<<b<<endl<<"Height="<<h<<endl<<"Room Details=2"<<endl<<"Length="<<l1<<endl<<"Breath="<<b1<<endl<<"Height="<<h1<<endl<<"Room Details=3"<<endl<<"Length="<<l2<<endl<<"Breath="<<b2<<endl<<"Height="<<h2<<endl;
    }
};
class house
    {
    public:
    int a,d,c,a1,d1,c1,a2,d2,c2;
    char name[50];
  void input()
      {
      cin.getline(name,50);
      cin>>a>>d>>c>>a1>>d1>>c1>>a2>>d2>>c2;
  }
    void display()
        {
        cout<<"House Name="<<name<<" House"<<endl<<"Address is:"<<endl<<"Room Details=1"<<endl<<"Length="<<a<<endl<<"Breath="<<d<<endl<<"Height="<<c<<endl<<"Room Details=2"<<endl<<"Length="<<a1<<endl<<"Breath="<<d1<<endl<<"Height="<<c1<<endl<<"Room Details=3"<<endl<<"Length="<<a2<<endl<<"Breath="<<d2<<endl<<"Height="<<c2<<endl;
    }
};
int main()
{
    int option;
    //cout<<"enter 1 for (address+room) and 2 for (house+room)"<<endl;
     cin>>option;
     if(option==1)
     {
	address a;
	a.input();
	a.display();
     }
     if(option==2)
     {
         house h;
         h.input();
         h.display();
     }
	return 0;
}
