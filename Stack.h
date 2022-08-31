#pragma once
#include <iostream>

struct Element {
	int val;
	Element* next;
};

bool IsEmpty(Element*& top);
void push(Element*& top, int val);
int top_check(Element* top);
void pop(Element*& top);
