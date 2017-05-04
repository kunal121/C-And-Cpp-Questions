#include <iostream>
using namespace std;

class internal{
protected:
    int imarks[3],itotal=0;
public:
    internal(int *m){
        for(int i=0; i<3; i++){
            imarks[i]=m[i];
            itotal = itotal + m[i];
        }
    }
};

class external{
protected:
    int emarks[3];
    int etotal = 0;
public:
    external(int *m){
        for(int i=0; i<3; i++)
        {
            emarks[i]=m[i];
            etotal = etotal + m[i];
        }
    }
};
class Result:protected internal,protected external{
public:
    Result(int *m,int *m1):internal(m),external(m1){
        cout<<itotal<<endl;
        cout<<etotal<<endl;
        cout<<itotal+etotal;
    }
};
int main(){
    int i;
    int imarks[3],emarks[3];
    for(i=0; i<3; i++){
        cin>>imarks[i];

    }
    for(i=0; i<3; i++){
        cin>>emarks[i];

    }
    Result r(imarks,emarks);
    return 0;
}
