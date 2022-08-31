#pragma once

#include <iostream>
#include <string>

struct Element {
	char *data;
	Element* next;
};

int f(char* key);
void add(Element* v[53], char* cuvant);
void afisare(Element* v[53]);


//Element* v[54] = { NULL };
//char cuvant[30];
//ifstream file;
//file.open("C:/Users/sysor/source/repos/Recapitularee/dictionar.txt");
//while (file >> cuvant)
//add(v, cuvant);
//
//afisare(v);
