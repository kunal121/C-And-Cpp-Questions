 #include<iostream>
 using namespace std;

 class abc
 {
 public:
     int a;
     abc()
     {

     }
     abc(int b)
     {
      a=b;
     }
     abc operator ~()s
    {
        return abc(~a);
    }
 };
 int main()
 {
    abc o,o1;
    cin>>o.a;
    o1=o.operator~();
    cout<<o1.a;
 }
