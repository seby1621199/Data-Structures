#pragma once
#include <iostream>
using namespace std;

struct Element {
	int val;
	Element* next;
};

bool empty(Element* front);
void push(Element*& front, Element*& tail, int val);
int pop(Element*& front);