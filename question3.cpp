// The main.cpp
#include <iostream>
using namespace std;

#include "Node.h"
#include "doublylinkedlist.h"

int main()
{
	// test case 1
	// Create a doubly linked list
	DoublyLinkedList *Dll_1;
	Dll_1 = new DoublyLinkedList;

	// Each node contains only one integer of a string
	Node n11(1);
	Node n12(2);
	Node n13(3);
	Node n14(4);
	Node n15(5);
	Node n16(6);

	// a doubly linked list of integers by inserting nodes
	Dll_1->addNewNodeToBack(&n11);
	Dll_1->addNewNodeToBack(&n12);
	Dll_1->addNewNodeToBack(&n13);
	Dll_1->addNewNodeToBack(&n14);
	Dll_1->addNewNodeToBack(&n15);
	Dll_1->addNewNodeToBack(&n16);

	Dll_1->split(2);
      
	return 0;
}
