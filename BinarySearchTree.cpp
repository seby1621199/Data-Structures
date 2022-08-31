#include "BinarySearchTree.h"
using namespace std;

// funtion make node 
Node* makenode(int val) {
	Node* q = new Node;
	q->dr = 0;
	q->st = 0;
	q->val = val;
	return q;
}

Node* insert(Node* &r, int val) {
	Node* q = makenode(val);
	Node* p = r;
	if (r == 0)
		return makenode(val);
	else
		if (val < r->val)
			r->st = insert(r->st, val);
		else 	
			if (val > r->val)
			r->dr = insert(r->dr, val);
	return r;
}


void search(Node* r ,int val) {
	if (r == 0) {
		cout<< "Nu s-a gasit";
	}
	else
	if (r->val == val) {
		cout << "Gasit";
	}
	else
		if (r->val < val)
			search(r->dr, val);
		else
			if (r->val > val)
				search(r->st, val);
}

