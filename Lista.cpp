#include <iostream>
#include "Lista.h"
using namespace std;

void inserarefata(Element* &cap, int adaugare) {
	Element* p = new Element;
	p->data = adaugare;
	p->leg = cap;
	cap = p;
	//std::cout << "aa";

}
void InserareFinal(Element* cap, int adaugare) {
	Element* p = cap;
	while (p->leg != 0)
		p = p->leg;
	Element* q = new Element;
	q->leg = 0;
	q->data = adaugare;
	p->leg = q;
}

void StergereElementFata(Element*& cap) {
	Element* p = cap;
	cap = cap->leg;
	delete p;
}

void StergereElementInLista(Element* &cap,int poz) {
	Element* q = cap;
	int i = 0;
	while (i != poz) {
		q = q->leg;
		i++;
	}
	q->leg = q->leg->leg;
}


void createlista(Element* &cap) {
	int x;
	while(cin>>x && x!=0){
		inserarefata(cap, x);
	}
}

void afisare(Element* cap) {
	Element* p = cap;
	while (p != 0)
	{
		cout << p->data << " ";
		p = p->leg;
	}

}