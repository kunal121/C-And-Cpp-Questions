#include<iostream>
using namespace std;
class lif
{
public:
    int top=0,siz,i,j=0,a[100],s[100],diz,yop=0;
    lif()
    {
        cout<<"Enter STACK1 Size\t";
        cin>>siz;
        cout<<"Enter STACK2 Size\t";
        cin>>diz;
        yop=siz+diz;
    }
    void cleanaf(){for(i=0;i<siz+diz;i++){a[i]=0;}}
    void push(int x)
    {
        if(top==yop){cout<<"OVERFLOW\n";}
        else if(x==1){
            int tmp;
            cout<<"ENTER ELEMENT\t";
            cin>>tmp;
            a[top]=tmp;
            top++;
        }
        else{
            int tmp;
            cout<<"ENTER STACK2 ELEMENT\t";
            cin>>tmp;
            a[yop-1]=tmp;
            yop-=1;
        }
//        disp();

    }
    void paop(int x)
    {
        if(top==0&&yop==siz+diz)
        {
            cout<<"Stack underflow\n";
        }
        else if(x==2){top-=1;a[top]=0;}
        else
        {
            a[yop]=0;
            yop+=1;
        }
    }
    void disp()
    {
        cout<<"STACK 1\n";
        for(i=0; i<top; i++)
        {
            cout<<a[i]<<"\t";
        }
        cout<<"STACK 2"<<endl;
        for(i=yop;i<siz+diz;i++){
            cout<<a[i]<<" \t";
        }
        cout<<endl;

        cout<<a[top]<<" " <<a[yop]<<endl;
    }
};
int main()
{
    lif bhav;
    bhav.cleanaf();
    int bha=0;
    while(1)
    {
        int choi;
        cout<<"Enter choice\n1.\tPush\n2.\tPop\n3.\tDisplay\n4.\tExit\n5.\tPush(2)\n6.\tPop(2)\n";
        cin>>choi;
        switch(choi)
        {
        case 1:
            bhav.push(choi);
            break;
        case 2:
            bhav.paop(choi);
            break;
        case 3:
            bhav.disp();
            break;
        case 5:
            bhav.push(choi);
            break;
        case 6:
            bhav.paop(choi);
            break;
        default:
            bha=1;
            break;
        }
        if(bha)
        {
            break;
        }
    }
    return 0;
}
