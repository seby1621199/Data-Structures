#include <iostream>
#include "ListaCirculara.h"

using namespace std;
/// <summary>
/// De invatat cum functioneaza
/// </summary>
/// <param name="cap"></param>
void CreateLC(Nod*& cap)
{
	Nod* p; int n;
	cout << " valori - cu 0 se iese" << endl;
	cin >> n;
	while (n) {
		p = new Nod; p->data = n;
		if (!cap) {//pun primul element
			p->succ = p;
			cap = p;
		}
		else {
			p->succ = cap->succ;
			cap->succ = p;
			cap = p;
		}
		cin >> n;
	}
	if (cap) cap = cap->succ;//ultimul nod devine cap
}


void Afisare(Nod* cap) {
	Nod* p = cap;
	cout << p->data<<" ";
	while (p->succ != cap)
	{
		p = p->succ;
		cout << p->data<<" ";
	}
}






void InserareInFata(Nod* &cap,int val) {
	Nod* p = cap;
	while (p->succ != cap)
	{
		p = p->succ;
	}
	Nod* q = new Nod;
	q->data = val;
	q->succ = cap;
	cap = q;
	p->succ = cap;

}


void StergereInFata(Nod*& cap) {
	Nod* q = cap;
	q = q->succ;
	while (q->succ != cap)
	{
		q = q->succ;
	}
	q->succ = cap->succ;
	q = cap;
	cap = cap->succ;

	delete q;

}

void StergereNodFinal(Nod* cap) {
	Nod* q = cap;
	q = q->succ;
	while (q->succ->succ != cap) {
		q = q->succ;
	}
	delete q->succ;
	q->succ = cap;
}