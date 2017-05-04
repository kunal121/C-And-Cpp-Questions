#include <iostream>
#include <map>
#include <string>
using namespace std;
int main()
{
    map<char,int> mp;
    map<char, int>::iterator it;
    int choice, item;
    char s;

    while (1)
    {
        cout<<"1.Insert Element"<<endl;
        cout<<"2.Delete Element"<<endl;
        cout<<"3.Size of Map"<<endl;
        cout<<"4.Find Element"<<endl;
        cout<<"5.Dislplay"<<endl;
        cout<<"6.Count Elements"<<endl;
        cout<<"7.exit"<<endl;
        cin>>choice;

        switch(choice)
        {
        case 1:

            cout<<"Enter value";
            cin>>item;
            cout<<"Enter key: ";
            cin>>s;
            mp.insert(pair<char,int>(s  ,item));
            break;

        case 2:
            cout<<"Enter string to be deleted";
            cin>>s;
            mp.erase(s);
            break;

        case 3:

            cout<<"Size";
            cout<<mp.size()<<endl;
            break;

        case 4:

            cout<<"Enter key";
            cin>>s;
            if (mp.count(s) != 0)
                cout<<mp.find(s)->second<<endl;
            else
                cout<<"No Element Found"<<endl;
            break;
        case 5:
	    cout<<"Display";
            for (it = mp.begin(); it != mp.end(); it++)
            {
                cout << (*it).first << ": " << (*it).second << endl;
            }
            break;
        case 6:

            cout<<"Enter the key at which it should be started ";
            cin>>s;
            cout<<mp.count(s)<<endl;
            break;

        case 7:
            exit(1);
            break;
        default:
            cout<<"Wrong Choice"<<endl;
        }
    }
    return 0;
}
