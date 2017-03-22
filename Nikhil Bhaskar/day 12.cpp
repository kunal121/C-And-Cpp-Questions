#include <iostream>
#include <vector>

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
    int grade,i;
       Student(string firstName,string lastName,int id,vector<int>& scores):Person(firstName,lastName,id)
           {
          
           int l=scores.size();
           for(i=0;i<l;i++){
               testScores.push_back(scores[i]);
            //testScores[i]=scores[i];
           //sum=sum+testScores[i];
           }
        
    }
 
    char calculate(){
         int l=testScores.size();
        int sum=0;
           for(i=0;i<l;i++){
            //testScores[i]=scores[i];
           sum=sum+testScores[i];
           }
           grade=sum/l;
    if(grade>=90 && grade<=100)
        return 'O';
         else if(grade>=80 && grade<90)
         return 'E';
         else if(grade>=70 && grade<80)       
        return 'A';
         else if(grade>=55 && grade<70)       
        return 'P';
     else if(grade>=40 && grade<55)
         return 'D';
         else    
         return 'T';
    }
    
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
};
