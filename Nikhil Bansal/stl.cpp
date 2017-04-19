#include<iostream>
#include<vector>
using namespace std;
int main()
{
	// Vector v is declared
	vector <int> v;		
	int b;
	for(int i=0;i<3;i++)
		{
			cin >> b;
			// push_back() function is used to insert the element in last
			v.push_back(b);
		}
	// v1 is declared and size of vector is passed
	vector <int> v1(3);
	// size() function is used to get the size of vector when the size is not known
	for(int i=0;i<v1.size();i++) 
		cin >> v1[i];
	// vector v2 is declared and 2 parameters are passed
	// 1st is size of vector and 2nd is the default value
	vector <int> v2(3,100);
	// vector v3 is declared and v2 vector is passed so that copy constructor is passed and elements if v2 is saved in v3
	vector <int> v3(v2);
	// array is declared
	int a[5] = {1,2,3,4,5};
	// base address of first element and last element is passed as parameter so that the vector is pointing to that array
	vector <int> v4(a,a+5);
	// clear() function is used to delete all the elements of the vector
	v.clear();
	//empty() function returns true if the vector is empty else false
	if(v.empty())
		cout << "vector is empty";
	for(int i=0;i<v.size();i++)
		cout << v[i] << " ";
	cout << endl;
	// erase() function is used to delete the elements from middle of the vector.
	// begin() function is used to get the address of the first element of array
	v1.erase(v1.begin()+1,v1.begin()+3);
	for(int i=0;i<v1.size();i++)
		cout << v1[i] << " ";
	cout << endl;
	// pop_back() is used to delete the last element is the vector.
	v2.pop_back();
	for(int i=0;i<v2.size();i++)
		cout << v2[i] << " ";
	cout << endl;
	// iterator is declared to iterate between the elements of the vector
	vector <int>::iterator it;	
	// it iterator is initialized to beginning of the vector
	it = v3.begin();	
	/**
	*	insert() function is used to insert elements in the middle or beginning of the vector
	*	It has 2 parameters : 1st is the position where to add
	*	2nd is the value to add.
	*	It can have 3 parameters...which is the no of times the value is to be added.
	*/
	v3.insert(it+1,3,200);
	for(int i=0;i<v3.size();i++)
		cout << v3[i] << " ";
	cout << endl;
	// front() and back() functions are used to get the first and last elements of the vector
	cout << "first element : " << v3.front() << " last element : " << v3.back() << endl;
}
