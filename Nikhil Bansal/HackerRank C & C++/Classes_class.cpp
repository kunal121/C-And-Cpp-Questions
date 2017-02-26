#include <iostream>
#include <sstream>
using namespace std;
class Student
{
    int mAge,mStandard;
    string mFirst_name,mLast_name;
public:
    void set_age(int age)
    {
        mAge = age;
    }
    void set_standard(int standard)
    {
        mStandard = standard;
    }
    void set_first_name(string first_name)
    {
        mFirst_name = first_name;
    }
    void set_last_name(string last_name)
    {
        mLast_name = last_name;
    }
    int get_age()
    {
        return mAge;
    }
    string get_last_name()
    {
        return mLast_name;
    }
    string get_first_name()
    {
        return mFirst_name;
    }
    int get_standard()
    {
        return mStandard;
    }
    void to_string()
    {
        cout << mAge << "," << mFirst_name << ","  << mLast_name << ","   << mStandard;
    }

};

int main() {
    int age, standard;
    string first_name, last_name;

    cin >> age >> first_name >> last_name >> standard;

    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);

    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    st.to_string();

    return 0;
}
