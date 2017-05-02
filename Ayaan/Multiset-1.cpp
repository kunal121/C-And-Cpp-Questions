#include <iostream>
#include <set>
#include <string>
using namespace std;
class person
{
private:
string lastName;
string firstName;
long phoneNumber;
public:
person() : lastName("blank"), firstName("blank"), phoneNumber(0L)
{ }
person(string lname, string fname, long pho) : lastName(lname), firstName(fname), phoneNumber(pho)
{ }
friend bool operator<(const person&, const person&);
void display()
{
cout<<endl<<lastName<< ",\t" <<firstName<< "\tPhone: "<<phoneNumber;
}
longget_phone() const
{ 
returnphoneNumber;
 }
};

bool operator < (const person& p1, const person& p2)
{
if(p1.lastName == p2.lastName)
return (p1.firstName < p2.firstName) ? true : false;
return (p1.lastName < p2.lastName) ? true : false;
}

classcomparePersons
{
public:
bool operator() (const person* ptrP1,
const person* ptrP2) const
{ return *ptrP1 < *ptrP2; }
};
int main()
{
multiset<person*, comparePersons>setPtrsPers;
multiset<person*, comparePersons>::iterator iter;

person* ptrP1 = new person("DEF", "ghi", 4157300);
person* ptrP2 = new person("ABC", "def", 3327563);
person* ptrP3 = new person("GHI", "jkl", 8435150);
person* ptrP4 = new person("JKL", "mno", 9207404);
person* ptrP5 = new person("MNO", "pqr", 6946473);
person* ptrP6 = new person("ABC", "abc", 8435150);
setPtrsPers.insert(ptrP1);
setPtrsPers.insert(ptrP2);
setPtrsPers.insert(ptrP3);
setPtrsPers.insert(ptrP4);
setPtrsPers.insert(ptrP5);
setPtrsPers.insert(ptrP6);
cout<< "Set sorted when created:";
for(iter=setPtrsPers.begin(); iter != setPtrsPers.end(); iter++ )
(**iter).display();
iter = setPtrsPers.begin();
while(iter != setPtrsPers.end() )
{
delete *iter;
setPtrsPers.erase(iter++);
}
cout<<endl;
return 0;
}
