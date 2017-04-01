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
       float l;
    public:
       void getData();
       virtual float calculateArea() = 0;
};

void Shape::getData()
{
    cin>>l;
}
class square:public Shape
{
    public:
    float calculateArea()
    {
       return l*l;
    }

};
class circle:public Shape
{
    public:
    float calculateArea()
    {
        return 3.14*l*l;
    }
};
int main()
{
Shape *o,*o1;
square obj;
circle obj1;
o=&obj;
o1=&obj1;
o->getData();
o1->getData();
cout<<"Area of square: " << o->calculateArea();
cout << "\nArea of circle: " << o1->calculateArea(); //o and o1 are pointer of Shape class

    return 0;
}
