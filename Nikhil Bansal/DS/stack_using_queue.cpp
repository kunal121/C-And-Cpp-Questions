#include<iostream>
using namespace std;

struct queue{
	int begin;
	int end;
	int a[10];
}*qu1,*qu2;

void enque(queue *&q,int i){
	if(q->begin == -1) {
		q->begin++;
		q->end++;
	}
	else
		q->end++;
	q->a[q->end] = i;
	cout << "\nbegin = " << q->begin << " end = " << q->end << "\n";
}

int deque(queue *&q){
	if(q->begin == q->end) {
		q->begin = -1;
		q->end = -1;
		return 0;
	} else {
		q->begin++;
		return q->a[q->begin];
	}
}

void display(queue *q) {
	for(int i=0;i <= q->end;i++)
		cout << q->a[i] << " ";
}

int main()
{
	qu1 = new queue;
	qu2 = new queue;
	qu1->begin = -1;
	qu1->end = -1;
	qu2->begin = -1;
	qu2->end = -1;
	int choice,num;
	string msg = "\n1.Push\n2.Pop\n3.Display\n4.Exit\nEnter choice ";
	cout << msg;
	cin >> choice;
	while(choice != 4){
		switch(choice){
			case 1 : cout << "\nEnter num ";
					cin >> num;
					enque(qu1,num);
					break;
			case 2: while(qu1->begin != qu1->end){
						enque(qu2,qu1->a[(qu1->begin)++]);
					}
					deque(qu1);
					while(qu2->begin != qu2->end){
						enque(qu1,qu2->a[(qu2->begin)++]);
					}
					if(qu2->begin != -1)
						enque(qu1,qu2->a[qu2->begin]);
					qu2->begin = -1;
					qu2->end = -1;
					break;
			case 3 : display(qu1);
					break;
		}
		cout << msg;
		cin >> choice;
	}
}
