#include<iostream>
using namespace std;
class abc{

public:
int i;
int roll,sub[5];
	
	void input(){
	cout<<"Enter roll no.\n"; 	
	cin>>roll;
	cout<<"Enter mrks ";
	for(i=0;i<3;i++)
		{
		cin>>sub[i];
		}
	}
	void display(int a){
	cout<<roll<<"\n"<<a<<"\n";

	}
	int calculate(){
		int sum=0;	
		for(i=0;i<3;i++)
		{
		sum+=sub[i];		
		}
		return sum;
	} 	
		
};

int main(){
abc s[100];
int ans[10],n=3,i;
	for(i=0;i<n;i++)
		s[i].input();
	cout<<"\n";	
	for(i=0;i<n;i++)
		ans[i]=s[i].calculate();
	cout<<"\n";
	for(i=0;i<n;i++)
		s[i].display(ans[i]);
	cout<<"\n";
}
