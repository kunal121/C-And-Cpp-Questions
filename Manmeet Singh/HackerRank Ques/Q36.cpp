#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
class Person{
	protected:
		string firstName;
		string lastName;
		int id;
	public:
		Person(string firstName, string lastName, int identification){
			this->firstName = firstName;
			this->lastName = lastName;
			this->id = identification;
		}
		void printPerson(){
cout<< "Name: "<< lastName << ", "<< firstName <<"\nID: "<< id << "\n";
		}

};
class Student :  public Person{
	private:
		vector<int> testScores;
	public:
Student(string f_name,string l_name,int id,vector<int>    t):Person(f_name,l_name,id)
            {
            for(int i=0;i<t.size();i++)
                testScores.push_back(t[i]);
        }
    void printPerson(){
      cout<<"Name: "<<lastName<<", "<<firstName<<endl<<"ID: "<<id<<endl;
  }
   char calculate(){
       int avg=0;
         for(int i=0;i<testScores.size();i++)
             {
             avg+=testScores[i];
         }
       //cout<<"t"<<testScores.size();
       //cout<<avg;
       avg=avg/testScores.size();
       if(avg>=90&&avg<=100)
       return 'O';
       else if(avg>=80 && avg<90)
           return 'E';
           else if(avg>=70&&avg<80)
           return 'A';
           else if(avg>=55 &&avg<70)
           return 'P';
           else if(avg>=40 && avg<55) return 'D';
           else
           return 'T';
       return 'a';
   }
  		// Write char calculate()
};
int main() {
	string firstName;
  	string lastName;
	int id;
  	int numScores;
	cin >> firstName >> lastName >> id >> numScores;
  	vector<int> scores;
  	for(int i = 0; i < numScores; i++){
	  	int tmpScore;
	  	cin >> tmpScore;
		scores.push_back(tmpScore);
	}
	Student* s = new Student(firstName, lastName, id, scores);
	s->printPerson();
	cout << "Grade: " << s->calculate() << "\n";
	return 0;
}
