#include <iostream>
using namespace std;

class find_ {
protected:
    int lb,ub;
public:
    void get(){
        cin>>lb>>ub;
    }
};
class der_prime:public find_{
    int a[10];
public:
    void detect_prime(){
        for(int i=ub; i>=lb; i--){
            int flag = 0;
            for(int j=2; j<=i/2; j++){
                if(i%j==0)
                {
                    flag=1;
                    break;
                }

            }
            if(flag==0){
                int x = i;
                while(x!=0) {
                    int r = x%10;
                    a[r]++;
                    x=x/10;
                }
            }

        }
    }
    void print_(){
        int pos=0,k=0;
        for(int i=0; i<10; i++){
            if(a[i]>=k)
            {
                pos=i;
                k=a[i];
            }
        }
        cout<<pos<<endl<<a[pos];
    }

};
int main() {
    static der_prime d1;
    d1.get(); //function in base class to enter lower bound(lb) and upper bound values(ub)
    d1.detect_prime(); // this function is responible for logic building in derived class(der_prime)
    d1.print_();//print the desired output in derived class
    return 0;
}
