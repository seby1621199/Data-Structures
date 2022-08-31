#include "Stack.h"
using namespace std;


bool IsEmpty(Element* &top) {
	return top == NULL;
}

void push(Element* &top,int val) {
	Element* q = new Element;
	if (IsEmpty(top)) {
		q->val = val;
		q->next = 0;
	}
	else {
		q->next = top;
		q->val = val;
	}
	top = q;
}

int top_check(Element* top) {
	if (IsEmpty(top) != 1)
		return top->val;
	else return -1;
}

void pop(Element* &top) {
	Element* q = top;
	top = top->next;
	delete q;
}