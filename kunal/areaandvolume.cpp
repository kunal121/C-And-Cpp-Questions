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

void Shape::get()
{
    cin>>r;
}
void Sphere::calculatevolume()
{
    cout<<1.33*3.14*r*r*r;
}
void Hemisphere::calculatevolume()
{
    cout<<0.66*3.4*r*r*r;
}
void Loader::loadFeatures(Shape* s)
{
    s->get();
    s->calculatevolume();
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
