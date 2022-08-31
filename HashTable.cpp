#include "HashTable.h"
using namespace std;

#define M 53
int f(char* key)
{
	int i, suma;
	suma = 0;
	for (i = 0; i < strlen(key); i++)
		suma = suma + *(key + i);
	return suma % M;
}

void add(Element* v[53], char *cuvant) {
	Element* q = new Element;
	
	q->data = cuvant;
	q->next = v[f(cuvant)];
	v[f(cuvant)] = q;
}

void afisare(Element* v[53]) {
	for(int i=0;i<53;i++)
		if (v[i] != NULL) {
			while (v[i] != NULL) {
				cout <<v[i]->data;
				v[i] = v[i]->next;
			}
		}
}

