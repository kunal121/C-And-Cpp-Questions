#include<iostream>
using namespace std;
class counter
{
    static int count;                                                   //static data members
public:
    //void initial();                                                   inital() not in use because of static data members
    void increment();
    void decrement();
    static void print();                                                //static data functions
};
int counter::count;                                                     //<------------------ defination outside class
/*void counter::initial()
{
    cout<<"Default value is 0"<<endl;
    count=0;
}*/
void counter::increment()
{
    count++;
    //cout<<"Value is "<<count<<endl;
}
void counter::decrement()
{
    count--;
    //cout<<"Value is "<<count<<endl;
}
 void counter::print()                                                  //<------------------ defination of static function members outside class
{
    cout<<"Value is "<<count<<endl;
}
int main()
{
    counter obj;
    int val=1;
   // obj.initial();
    while(val!=0)
    {
        cout<<"Enter 1 to  increment 2 to decrement or 0 to exit"<<endl;
        cin>>val;
         if(val==0)
         {
             break;
         }
         else if(val==1)
         {
             obj.increment();
             counter::print();
         }
         else if(val==2)
         {
             obj.decrement();
             counter::print();
         }
    }
}
