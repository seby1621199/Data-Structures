#include "Queue.h"

bool empty(Element* front) {
	return front == 0;
}


void push(Element* &front, Element* &tail,int val) {
	Element* q = new Element;
	q->val = val;
	q->next = 0;
	if (empty(front)) {
		front = q;
		tail = q;
	}
	else
	{
		tail->next = q;
		tail = q;
	}

}

int pop(Element* &front) {
	if (empty(front)) {
		cout << "goala";
		return 0;
	}
	else{
		Element* q = front;
		front = front->next;
		int val = q->val;
		delete q;
		return val;
	
	}

}