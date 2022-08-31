#include "ListaDublu.h"
#include <iostream>

using namespace std;

void InserareInFata(Node* &head, Node* &tail,int val) {
	Node* q = new Node;
	q->val = val;
	q->succ = head;
	q->pred = NULL;
	if(head!=0) //asta de invatat
	head->pred = q; //asta de invatat

	head = q;
	if (tail == 0)
		tail = head;
}

void AfisareStangaDreapta(Node* head, Node* tail) {
	if (head != 0) {
		Node* q = head;
		while (q != 0)
		{
			cout << q->val << " ";
			q = q->succ;
		}
	}
}

void AfisareDreaptaStanga(Node* head, Node* tail) {
	if (tail != 0) {
		Node* q = tail;
		while (q != 0)
		{
			cout << q->val << " ";
			q = q->pred;
		}
	}
}

