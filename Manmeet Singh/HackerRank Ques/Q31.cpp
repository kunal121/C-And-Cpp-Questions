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
class Shape
{
    protected:
       float r;
    public:
    void get()  ;
    virtual void calculatevolume()=0;

};

class Sphere : public Shape
{
    public:
   void calculatevolume();

};

class Hemisphere : public Shape
{
    public:
       void calculatevolume();

};
class Loader
{
   public:
     void loadFeatures(Shape*);
};
void Shape::get(){cin>>r;
                 //cout<<r;
                 }



void Sphere::calculatevolume(){
      double ans=(4)*(3.14)*r*r*r/3;
        cout<<ans<<endl;
}

void Hemisphere::calculatevolume(){
      float ans=(2)*(3.14)*r*r*r/3;
        cout<<ans<<endl;
}
void Loader::loadFeatures(Shape *o){
    o->get();
    o->calculatevolume();
}
int main()
{
    Loader *l = new Loader;
    Shape *s;
    Sphere  sq;
    Hemisphere c;
    s=&sq;
    l->loadFeatures(s);
    s=&c;
    l->loadFeatures(s);
    return 0;
}
