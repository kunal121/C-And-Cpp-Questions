#include<iostream>
using namespace std;
class area
{
  int length,breadth;
  public:
      area()
      {
          length=5;
          breadth=2;
      }
      area(int l,int b)
      {
          length=l;
          breadth=b;
      }
      void get_area()
      {
          cout<<length*breadth;
      }
};
int main()
{

    area o1(5,3);
    o1.get_area();
}
