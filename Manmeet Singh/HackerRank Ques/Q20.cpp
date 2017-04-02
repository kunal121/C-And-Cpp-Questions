#include <iostream>

using namespace std;
class one
{
protected:
int m;
public:
void get_m();
};
void one::get_m(){
        cin>>m;
        cout<<m<<endl;
    }
class two{
    protected:
    int n;
    public:
    void get_n(){
        cin>>n;
        cout<<n<<endl;
    }

};

class last : public one, public two{
    public:
    void display(){
        cout<<n*m;
    }
};
int main() {
last l;
l.get_m();
l.get_n();
l.display();
return 0;
}
