#include<iostream>
using namespace std;

class matrix{
int i,j;
int m[10][10]={{0}};
public:
int a,b;
    matrix(){
    a=2;
    b=2;
    }
    matrix(int x,int y)
    {
        a=x;
        b=y;
    }
  void input(){
  for(i=0;i<a;i++)
  {
    for(j=0;j<b;j++){
            cin>>m[i][j];
    }
   }
}
   matrix operator+(matrix ob){
       matrix t(3,3);
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++){
            t.m[i][j]=m[i][j]+ob.m[i][j];
        }
    }
    return t;
   }


   matrix operator-(matrix ob){
    matrix t;
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++){
            t.m[i][j]=m[i][j]-ob.m[i][j];
        }
    }
    return t;
   }

   void display()
   {
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++){
            cout<<m[i][j]<<"\t";
        }
        cout<<endl;
    }
   }

};

int main(){
int i,j;
matrix o,o1,o2(3,3);
cout<<"Enter the first matrix values"<<endl;
o1.input();
o1.display();
cout<<"Enter the second matrix values"<<endl;
o2.input();
o2.display();
   /* for(i=0;i<o1.a;i++)
    {
        for(j=0;j<o1.b;j++){
            o.m[i][j]=o1.m[i][j]+o2.m[i][j];
        }
    }
   }*/
o=o1+o2;
cout<<"Sum is"<<endl;
o.display();

/*
    for(i=0;i<o1.a;i++)
    {
        for(j=0;j<o1.b;j++){
            o.m[i][j]=o1.m[i][j]-o2.m[i][j];
        }
    }
   }*/
   o=o1-o2;
cout<<"Sub is"<<endl;
o.display();
}
