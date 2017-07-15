#include <iostream>

using namespace std;
void range(int x)
{
        if(x>=13)
        throw(1);

    else if(x<0)
        throw(2);

    else
        throw(0);

}
int main()
{
	int age;
	cin>>age;
	try{
		range(age);
	}
		catch(int a)
	{
		if(a==1)
			cout<<"Eligible";
		else if(a==2)
			cout<<"Wrong input";
		else
			cout<<"Not Eligible";
	}
	return 0;
}
