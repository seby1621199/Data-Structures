#pragma once

struct Element {
	int data;
	Element* leg;
};

void inserarefata(Element* &cap, int adaugare);
void createlista(Element*& cap);
void InserareFinal(Element* cap, int adaugare);
void StergereElementFata(Element*& cap);
void StergereElementInLista(Element* &cap, int poz);
void afisare(Element* cap);
