#include <iostream>
using namespace std;

class Range{
  protected:
    int lb; //lower bound of range
    int ub; //upper bound of range
  public:
    void get_range();
};

class Even:public Range{
  public:
    void show_even();
};
void Range::get_range()
    {
    cin>>lb>>ub;
}
void Even::show_even()
    {
    for(int i=lb;i<=ub;i++)
        if(i%2== 0 )
        cout<<i<<" ";

}
int main() {
    Even obj1;
    obj1.get_range();
    obj1.show_even();
    return 0;
}
