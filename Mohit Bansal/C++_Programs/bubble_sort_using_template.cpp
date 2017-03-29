 #include<iostream>
using namespace std;
template <class t>
void sort(t a[3])
{
	t temp;
    for(int i=1;i<3;++i)
    {
        for(int j=0;j<(3-i);++j)
	{
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
    }
}
}
int main()
{
	int a[3]={10,5,7};
	float b[3]={1.4,4.7,4.6};
	char c[3]={'f','t','h'};

	//cout << "Enter two integers:\n";
	//cin >> i1 >> i2;
	sort(a);

	//cout << "\nEnter two floating-point numbers:\n";
	//cin >> f1 >> f2;
	sort(b) ;

	//cout << "\nEnter two characters:\n";
	//cin >> c1 >> c2;
	sort(c) ;
	for(int i=0;i<3;i++)
	cout<<a[i]<<endl;
	for(int i=0;i<3;i++)
	cout<<b[i]<<endl;
	for(int i=0;i<3;i++)
	cout<<c[i]<<endl;
	return 0;
}
