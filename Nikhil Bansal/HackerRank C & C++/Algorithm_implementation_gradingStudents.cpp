/**
*   This is the solution to the Grading Students problem in Algo domain of Hacker Rank
*   Question can be found here: https://www.hackerrank.com/challenges/grading
*/
#include <iostream>
using namespace std;


int main(){
    int n;
    cin >> n;
    for(int a0 = 0; a0 < n; a0++){
        int grade;
        cin >> grade;
        if(grade > 37)
        {
            int rem = 5 - (grade % 5);
            if(rem < 3)
                grade = grade + rem;
        }
        cout << grade << endl;
    }
    return 0;
}

