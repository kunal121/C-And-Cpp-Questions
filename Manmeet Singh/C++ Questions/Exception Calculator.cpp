#include<iostream>
#include<string.h>
using namespace std;
// catching class type
// e should be capital
class Exception
{
	private:
		int err;
		char *err_msg;   //err_msg[100]
		public:
			Exception(int en,const char *em)
			{
				err =en;
				int len=strlen(em);
				err_msg=new char[len+1]; //pointer tha to memory allocated
				strcpy(err_msg,em);

			}
			void display(){
				cout<<"\n ERROR no="<<err<<"\t ERROR= "<<err_msg;
			}
            void divide(int a,int b)
            {
                if(b==0)
                {
                    throw Exception(0,"divide by zero error");//throwing class type exception
                                                                //constructor called  ..means object created implicitly
                                                                //any constructor is called to initialize variable of a class
                }
                else
                {
                    float res=(float)a/b;
                    cout<<"RESULT= "<<res;
                }
            }
};

int main()
{
	int num1,num2;
	cout<<"enter 2 numbers ";
	cin>>num1>>num2;
	try
	{
	    Exception ob;
		ob.divide(num1,num2);
	}
	catch(Exception e)  // catching class type exception
	{
		e.display();
	}
	cout<<"\n EXITING MAIN()";
	return 0;

}
