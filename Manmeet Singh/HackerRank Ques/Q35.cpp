#include <iostream>
#include <stdio.h>

using namespace std;

class alpha {
  int x;
public:
  alpha(int i){
    x=i;
    cout<<"In alpha\n";
  }
  void show_alpha(){
    cout<<" x = "<<x<<"\n";
  }
};

class beta {
  float p,q;
public:
  beta(float a, float b){
    p=a;
    q=b+p;
    cout<<"In beta\n";
  }
  void show_beta(){
    cout<<" p = "<<p<<"\n";
    cout<<" q = "<<q<<"\n";
  }
};


class gamma:public alpha,public beta{
  int u,v;
    public:
    gamma(int a,int b,float c):alpha(2*a),beta(c,c){
        u=a;
        v=b;
    }
void show_gamma(){

   cout <<" u = "<<u<<"\n";
   cout <<" v = "<<v<<"\n";
}};
int main () {
  int a,b;
  float c;
  scanf("%d %d %f",&a,&b,&c);
  gamma g(a,b,c);
  g.show_alpha();
  g.show_beta();
  g.show_gamma();
  return 0;
}
