#include<iostream>
using namespace std;

class Distance{
    int feet;
    int inches;
  public:
    void getdata();
    void show();
    Distance add(Distance);
    friend Distance add (float, Distance);
};
#include<math.h>
void Distance::getdata(){
    cin>>feet>>inches;
}

void Distance::show(){
    cout<<feet<<" "<<inches<<endl;
}
Distance Distance::add(Distance o){
    Distance t;
    t.feet=feet+o.feet;
    t.inches=inches+o.inches;

    if(t.inches>=12){
        t.feet++;
        t.inches=t.inches-12;
    }
    return t;
}
Distance add(float f,Distance o){
    Distance t;
    double fe = floor(f / 0.3048);
    f -= fe * 0.3048;
    double in = floor(f / 0.0254);
    t.feet=fe+o.feet;
    t.inches=in+o.inches;

    if(t.inches>=12){
        t.feet++;
        t.inches=t.inches-12;
    }
    return t;


}
int main(){
    Distance d1, d2, d3, d4;
    d1.getdata();
    d2.getdata();
    d3 = d1.add(d2);
    float fin;
    cin >> fin;
    d4 = add(fin,d2);
    d3.show();
    cout << endl;
    d4.show();
}


