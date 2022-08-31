#pragma once

struct Node {
	int val;
	Node* succ;
	Node* pred;
};
void InserareInFata(Node*& head, Node*& tail, int val);
void AfisareStangaDreapta(Node* head, Node* tail);
void AfisareDreaptaStanga(Node* head, Node* tail);

