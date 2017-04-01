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
void Shape::getData(){
    cin>>l;
}
class Square:public Shape{
    public:
    Square(){
        Shape::getData();
    }
    float calculateArea(){
        float a;
        a=l*l;
        return a;
    }
};
class Circle:public Shape{
    public:
    Circle(){
        getData();
    }
    float calculateArea(){
        float a;
        a=3.14*l*l;
        return a;
    }
};
int main(){
    Shape *o,*o1;
    Square s;
    Circle c;
    o=&s;
    o1=&c;
    cout<<"Area of square: " << o->calculateArea();
cout << "\nArea of circle: " << o1->calculateArea(); //o and o1 are pointer of Shape class

    return 0;
}
