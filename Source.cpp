#include <iostream>
#include "BinarySearchTree.h"
#include <fstream>
#include <string>


using namespace std;
int main() {
	Node* root = 0;
	root=insert(root, 30);
	root=insert(root, 35);
	root=insert(root, 25);
	root = insert(root, 8);
	search(root,32);


}