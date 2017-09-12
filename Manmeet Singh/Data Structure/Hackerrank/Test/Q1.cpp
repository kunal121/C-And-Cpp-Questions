#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
class linked_list
{
	struct node
	{
		int info;
		node *next;
	};
	struct node *start;

    public:

    linked_list()
        {
        start=NULL;
        }
void create_ll(){
    node *n;
    while(1){
        int num;
        cin>>num;
        if(num==-1) break;
        n= new node;
        n->info=num;
        n->next=start;
        start=n;
    }

}
void insert_sorted(){
    int num;
    cin>>num;
    node *n=new node;
    n->info=num;
    n->next=start;
    start=n;


    node *t,*s;
    t=start;
    while(t!=NULL){
       s=t->next;
        while(s!=NULL){
        if((t->info)>(s->info)){
            int temp=t->info;
            t->info=s->info;
            s->info=temp;
        }
        s=s->next;
    }
    t=t->next;
}

}
void show(){
    node *temp=start;
    while(temp!=NULL){cout<<temp->info<<endl;
                     temp=temp->next;}
}
};
 int main()
{
	linked_list obj;
     obj.create_ll();
     obj.insert_sorted();
     obj.show();
     return 0;
 }
