#pragma once

struct Nod {
	int data;
	Nod* succ;
};

void CreateLC(Nod*& cap);
void Afisare(Nod* cap);
void InserareInFata(Nod*& cap, int val);
void StergereInFata(Nod*& cap);
void StergereNodFinal(Nod* cap);