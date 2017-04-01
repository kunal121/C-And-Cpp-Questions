#include <iostream>
using namespace std;
class customer
    {
    protected:
    int c_no;
    char name[20];
    int qty;
    int price;
    float discount;
    float net_price;
    public:
    void input();
};
class seller :public customer
    {
    public:
    float total_price;
    void caldiscount();
    void show();
};
#include <iostream>
using namespace std;
class customer
    {
    protected:
    int c_no;
    char name[20];
    int qty;
    int price;
    float discount;
    float net_price;
    public:
    void input();
};
class seller :public customer
    {
    public:
    float total_price;
    void caldiscount();
    void show();
};

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    seller ob;
    ob.caldiscount();
    ob.show();
    return 0;
}
