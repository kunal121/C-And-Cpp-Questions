#include<iostream>
#include<string.h>
using namespace std;
class abc
{
	char str[100],s[100];
	int i,n,top,st[100],len,flag=0;
	public:
		abc()
		{
			top=-1;
			cout<<"Enter the string:";
			cin>>s;
			len=strlen(s);
			top1=-1;
			for(i=0;i<len;i++)
            {
                if(s[i]=='0'||s[i]=='1'||s[i]=='2'||s[i]=='3'||s[i]=='4'||s[i]=='5'||s[i]=='6'||s[i]=='7'||s[i]=='8'||s[i]=='9')
				{
					str[i]=s[i];
				}
				else if(s[i]=='+' || s[i]=='-' )
                {

                }

            }
		}
		void push()
		{
			char a,b;
			for(i=0;i<len;i++)
			{
				if(str[i]=='0'||str[i]=='1'||str[i]=='2'||str[i]=='3'||str[i]=='4'||str[i]=='5'||str[i]=='6'||str[i]=='7'||str[i]=='8'||str[i]=='9')
				{
					st[++top]=str[i]-48;
				}
				else if(top==0)
						{
							flag=1;
							break;
						}
				else
				{
					if(str[i]=='+' || str[i]=='-'||str[i]=='*' || str[i]=='/' || str[i]=='^')
					{
					if( top==0)
					{
					flag=1;
					break;
					}else{
						a=st[top--];

							b=st[top--];
							}
					}
					if(str[i]=='+')
					{
						st[++top]=b+a;
					}
					else if(str[i]=='-')
					{
						st[++top]=b-a;
					}
					else if(str[i]=='*')
					{
						st[++top]=b*a;
					}
					else if(str[i]=='/')
					{
						st[++top]=b/a;
					}
					else if(str[i]=='^')
                    {
                        int j=a;
                        int ans=1;
                        for(int k=0;k<j;k++)
                        {
                            ans=(ans)*(b);
                           //105+ cout<<ans<<" ";
                        }
                        st[++top]=ans;
                    }
				}


			}
		}
	void display()
	{
		if(flag==1||top!=0)
		{
			cout<<"Invalid";
		}
		else
		cout<<st[top];
	}
};
int main()
{
	abc a;
	a.push();
	a.display();
}
