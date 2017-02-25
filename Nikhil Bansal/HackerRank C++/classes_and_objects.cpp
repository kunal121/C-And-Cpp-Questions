class Student
{
    int marks[5],total;
public:
    void input()
    {
        int i;
        for(i=0;i<5;i++)
        {
            cin >> marks[i];
        }
    }
    int calculateTotalScore()
    {
        total = 0;
        int i;
        for(i=0;i<5;i++)
        {
            total += marks[i];
        }
        return total;
    }

};
