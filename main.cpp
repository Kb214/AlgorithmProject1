// Spring 2026
// Project 1: Doubly Linked List
// Due Date: March 10, 2026, Tuesday
// Name: KARLEIGH BRANSCOMB
// ID (Last 4 Digits):
// Description of the Program (2-3 sentences):
// Date Written: 3/9/26
// Date Revised: 3/6/26


#include <iostream>
using namespace std;
#include "doublylinkedlist.h"

int main()
{
	// *********** DRAW DOUBLY LINKED LIST ***********
	DoublyLinkedList Dll_1;
	
	// Each node contains only one integer of a string
	Node n11(10);
	Node n12(20);
	Node n13(30);
	Node n14(40);
	Node n15(50);

	// a doubly linked list of integers by inserting nodes
	Dll_1.addNewNodeToFront(&n11);
	Dll_1.addNewNodeToBack(&n12);
	Dll_1.addNewNodeToFront(&n13);
	Dll_1.addNewNodeToBack(&n14);
	Dll_1.addNewNodeToFront(&n15);

	Dll_1.drawDoublyLinkedList();

	cout << endl;




    // *********** IS PALINDROME ***********



    cout << Dll_1.isPalindrome() << endl;

	// Create a doubly linked list
	DoublyLinkedList Dll_2;
	
	// Each node contains only one integer of a string
	Node n21(10);
	Node n22(20);
	Node n23(20);
	Node n24(10);

	// a doubly linked list of integers by inserting nodes
	Dll_2.addNewNodeToFront(&n21);
	Dll_2.addNewNodeToFront(&n22);
	Dll_2.addNewNodeToFront(&n23);
	Dll_2.addNewNodeToFront(&n24);

	cout << Dll_2.isPalindrome() << endl;

    std::cout << "\n";




    // *********** SPLIT LIST ***********




    DoublyLinkedList *Dll_3;
	Dll_3 = new DoublyLinkedList;

    Node n16(1);
	Node n17(2);
	Node n18(3);
	Node n19(4);
	Node n20(5);
	Node n25(6);

	// a doubly linked list of integers by inserting nodes
	Dll_3->addNewNodeToBack(&n16);
	Dll_3->addNewNodeToBack(&n17);
	Dll_3->addNewNodeToBack(&n18);
	Dll_3->addNewNodeToBack(&n19);
	Dll_3->addNewNodeToBack(&n20);
	Dll_3->addNewNodeToBack(&n25);

	Dll_3->split(3);

    std::cout << "\n\n";




    // *********** ADD NEW NODE BEFORE TARGET ***********




    DoublyLinkedList *Dll_4;
	Dll_4 = new DoublyLinkedList;

	// Each node contains only one integer of a string
	Node n26(11);
	Node n27(22);
	Node n28(33);
	Node n29(44);
	Node n30(55);
	Node n31(66);

	// a doubly linked list of integers by inserting nodes
	Dll_4->addNewNodeToBack(&n26);
	Dll_4->addNewNodeToBack(&n27);
	Dll_4->addNewNodeToBack(&n28);
	Dll_4->addNewNodeToBack(&n29);
	Dll_4->addNewNodeToBack(&n30);
	Dll_4->addNewNodeToBack(&n31);

	Node n32(77);
	Dll_4->addNewNodeBeforeTargetNode(&n32, 44);
	Node n33(88);
	Dll_4->addNewNodeBeforeTargetNode(&n33, 29);
	
	Dll_4->displayDoublyLinkedList();

	std::cout << "\n\n";
	return 0;
}
