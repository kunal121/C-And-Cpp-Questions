const int size=10;
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

class country
{
        protected:
                           char cname[size];
                           float pprc;
                           float Iprc;
                           float ratio;
        public:
   virtual void disp()=0;
                          country(){ }
                          virtual void getdata()
                    {
                      //        cout<<"Enter Country Name ";
                              cin>>cname;
                       //       cout<<"Enter the % of Polio ";
                              cin>>pprc;
                         //     cout<<"Enter the % of Literacy ";
                              cin>>Iprc;
                     }
                          virtual void display()
                    {

                        cout<<"Country Name "<<cname<<endl;
                        cout<<"Country Polio% "<<pprc<<endl;
                        cout<<"Country Lit. % "<<Iprc<<endl;
                        cout<<"The Measure of Interdependency "<<float (pprc/Iprc)<<endl;
                    }
};
           class state: public country
    {

public:

   void disp(){cout<<"Welcome";}

     char state[20];
   float polio;
   float lite;
   void getdata()
    {
        cin>>state>>polio>>lite;
    }
  void display()
   {
      cout<<"State Name "<<state<<"\n";
      cout<<"%Age of Polio of State "<<polio<<"\n";
      cout<<"%Age of Lite. of State "<<lite<<"\n";
      cout<<"The Measure of Interdependency "<<float(polio/lite);

  }

};


int main() {
    state o;
    o.country::getdata();
    o.state::getdata();
    o.state::disp();
    cout<<"\n";
    o.country::display();
    o.state::display();


    return 0;
}
