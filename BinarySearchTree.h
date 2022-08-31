#pragma once
#include <iostream>

struct Node {
	int val;
	Node* st;
	Node* dr;
};

Node* makenode(int val);
Node* insert(Node*& r, int val);
void search(Node* r, int val);





