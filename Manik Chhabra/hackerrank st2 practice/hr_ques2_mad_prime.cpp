#include<iostream>
using namespace std;
class find_
{
	protected:
	int lb,ub;
	    public:
        void get()
            {
            cin>>lb>>ub;
        }
};
class der_prime:public find_
 {
    protected:
        int i,j,k=0,count=0,b[20],m=0,c[20],n=0,count1[20]={0},a[20],temp,rem[50],temp1,l=0,count2[50]={0},p=0,temp2,temp3,max,d[30],q=0,count3=0,max1,temp4;
    public:
        void detect_prime()
        {
            for(i=lb;i<=ub;i++)
                {
                for(j=1;j<=i;j++)
                    {
                    if(i%j==0)
                        {
                        count++;
                    }
                }
                if(count==2)
                    {
                        a[k]=i;
                        k++;
                    }   
            count=0;
            }
         a[k]=0;
		 temp=k;   
        for(i=0;i<temp;i++)
        {
        	for(j=a[i];j>0;j=j/10)
        	{
        		rem[l]=j%10;
        		l++;
			}
		}
		rem[l]=0;
		temp1=l;
		for(i=0;i<temp1;i++)
		{
			b[m]=rem[i];
			m++;
		}
		b[m]=0;
		for(i=0;i<temp1;i++)
		{
			for(j=i+1;j<temp1;j++)
			{
				if(b[i]==b[j])
				{
					b[j]=0;
				}
			}
		}
		for(i=0;i<temp1;i++)
		{
			if(b[i]!=0)
			{
				c[n]=b[i];
				n++;
			}
		}
		c[n]=0;
		temp2=n;
		for(i=0;i<temp2;i++)
		{
			for(j=0;j<temp1;j++)
			{
				if(c[i]==rem[j])
				{
					count2[p]++;
				}
			}
			p++;
		}
		max=count2[0];
		for(i=0;i<temp2;i++)
		{
			if(max<count2[i])
			{
				max=count2[i];
				temp3=i;
			}
		}
		for(i=0;i<temp2;i++)
		{
			if(max==count2[i])
			{
				count3++;
				d[q]=c[i];
				q++;
			}
		}
		d[q]=0;
		max1=d[0];
		for(i=0;i<q;i++)
		{
			if(max1<d[i])
				max1=d[i];
		}
		for(i=0;i<temp2;i++)
		{
			if(max1==c[i])
				temp4=i;
		}
	}
        void print_()
        {
        	if(count3==1)
				cout<<c[temp3]<<"\n"<<count2[temp3];
			else
				cout<<max1<<"\n"<<count2[temp4];		
			
		}
};
int main()
{
	 static der_prime d1;
	d1.get(); //function in base class to enter lower bound(lb) and upper bound values(ub)  
	d1.detect_prime(); // this function is responible for logic building in derived class(der_prime)
	d1.print_();//print the desired output in derived class
	return 0;
}
