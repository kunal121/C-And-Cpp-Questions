#include<iostream>
#include<cmath>
using namespace std;
class div
{
    int rel,img;
public:
    void getval(float r,float i)
    {
       rel=r;img=i;
    }                                           //division real=(ac+bd)/(c^2+d^2)   img=(bc-ad)/(c^2+d^2)
    void putval(void)
    {
        cout<<rel<<"+"<<img<<"i"<<endl;


    }
    void divides(div s1,div s2)
    {
        //float a,b;
        rel=(((s1.rel)*(s2.rel))+((s1.img)*(s2.img)))/(pow(s2.rel,2)+pow(s2.img,2));
    img=(((s2.rel)*(s1.img))-((s1.rel)*(s2.img)))/(pow(s2.rel,2)+pow(s2.img,2));
   // cout<<"division:"<<a<<"+"<<b<<"i"<<endl<<endl<<endl;
    }
};
int main()
{
    div v1,v2,v3;
    v1.getval(1,1);
    v2.getval(1,1);
    v3.divides(v1,v2);
    v1.putval();
    v2.putval();
    v3.putval();
    return 0;
}
