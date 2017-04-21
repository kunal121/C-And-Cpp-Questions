#include<iostream>
#include<string.h>
using namespace std;
class code
{
	char* str;
	int length;
	public:
		code()
		{
			length=0;
			str=new char[length+1];
		}
		code(char *s)
		{
			length=strlen(s);
			str=new char[length+1];
			strcpy(str,s);
		}
		code operator+(code);
		int operator==(code);
		int operator>(code);
		int operator<(code);
		void display()
		{
			cout<<str<<endl;
		}
};
code code::operator+(code s2)
{
	int l1=strlen(str);
	int l2=strlen(s2.str);
	code s3;
	s3.str=new char[l1+l2+1];
	strcpy(s3.str,str);
	strcat(s3.str," ");
	strcat(s3.str,s2.str);
	return s3;
}
int code::operator==(code s2)
{
	int a;
	a=strcmp(str,s2.str);
	return a;
}
int code::operator>(code s2)
{
	int a;
	a=strcmp(str,s2.str);
	return a;
}
int code::operator<(code s2)
{
	int a;
	a=strcmp(str,s2.str);
	return a;
}
int main()
{
	char s4[100],s5[100];
	int choice,k;
	cout<<"Enter 1st string"<<endl;
	cin>>s4;
	cout<<"Enter 2nd string"<<endl;
	cin>>s5;
	code s1(s4),s2(s5);
	do{
		cout<<"Enter 1 to conactenate strings"<<endl;
		cout<<"Enter 2 to check if string1 is equal to string2"<<endl;
		cout<<"Enter 3 to check if string1 is greater than string2"<<endl;
		cout<<"Enter 4 to check if string1 is less than string2"<<endl;
		cout<<"Enter 5 to quit"<<endl;
		cin>>choice;
		code s3;
		switch(choice)
		{
			case 1:
				s3=s1+s2;
				cout<<"Resultant string::"<<endl;
				s3.display();
				break;
			case 2:
				k=(s1==s2);
				if(k==0)
					cout<<"Yes!!!"<<endl;
				else
					cout<<"No!!!"<<endl;
				break;
			case 3:
				k=(s1>s2);
				if(k>0)
					cout<<"Yes!!!"<<endl;
				else
					cout<<"No!!!"<<endl;
				break;
			case 4:
				k=(s1<s2);
				if(k<0)
					cout<<"Yes!!!"<<endl;
				else
					cout<<"No!!!"<<endl;
				break;
		}
	}while(choice!=5);
}

