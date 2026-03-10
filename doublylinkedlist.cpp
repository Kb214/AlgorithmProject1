// Spring 2026
// Project 1: Doubly Linked List
// Due Date: March 10, 2026, Tuesday
// Name: KARLEIGH BRANSCOMB
// ID (Last 4 Digits):
// Description of the Program (2-3 sentences):
// Date Written: 3/9/26
// Date Revised: 3/6/26



#ifndef DOUBLYLINKEDLIST_CPP
#define DOUBLYLINKEDLIST_CPP

#include "doublylinkedlist.h"

DoublyLinkedList::DoublyLinkedList() 
{
	head = NULL;
	tail = NULL;
}


DoublyLinkedList::~DoublyLinkedList() 
{

}

void DoublyLinkedList::addNewNodeToFront(Node * newNode) {
	if(head == NULL && tail == NULL) {
		head = tail = newNode;
	} else {
		head->prev = newNode;
		newNode->next = head;
		head = newNode;
	}
}

void DoublyLinkedList::addNewNodeToBack(Node * newNode) {
	if(head == NULL && tail == NULL) {
		head = tail = newNode;
	} else {
		tail->next = newNode;
		newNode->prev = tail;
		tail = newNode;
	}
}


Node* DoublyLinkedList::removeNodeFromFront()
{
	Node *tempNode;

	tempNode = head;
	head = head->next;
	return tempNode;
}


void DoublyLinkedList::displayDoublyLinkedList()
{
	Node *tempNode;

	tempNode = head;
	while (tempNode != NULL)
    {
        cout << tempNode->value << " ";
        tempNode = tempNode->next;
    }
}

void DoublyLinkedList::drawDoublyLinkedList()
{
 //node is assigned at head
  Node* tempNode = head;

  //loop as long as the temporary node is not NULL
  while(tempNode != NULL){
	//print out addresss, previous value, value, and next value
	cout << "[address:" << tempNode 
	<< ", prev:" << tempNode->prev 
	<< ", value: " << tempNode->value 
	<< ", next: " << tempNode->next << "]\n";

	//go to next value and assign tempoNode that value
	tempNode = tempNode->next;
  }

}


bool DoublyLinkedList::isPalindrome()
{

	//assign headnode to head and tailnode to tail.
	Node* headnode = head;
	Node* tailnode = tail;

	//if headnode and tailnode is both NULL return TRUE
	if(headnode == NULL && tailnode == NULL){
		return true;
	}

	//as long as headnode and tailnode don't end up at the same spot and cross eachother go to next spot
	while(headnode != tailnode && headnode != tailnode->next){
		
		//if the head and tail don't equal the same value return false
		if(headnode->value != tailnode->value){

			return false;
		}

		headnode = headnode->next;
		tailnode = tailnode->prev;
		

	}
	//return to true after while loop finishes
	return true;

}

void DoublyLinkedList::split(int n) // n is the number of even partitions
{	
	//assign headnode to the head
 	Node* headnode = head;

	//checks size of list
	int size = 0;
	while(headnode != NULL){

		size++;
		headnode = headnode->next;
	}

	//go back to the start of the list
	headnode = head;	


	//divide the size of list by n to get even amount
	int div = size/n;

	//if n is less than, greater than the sze of the list, and if the size is not even, print: Cannot be Processed
	if(n<1 || n>size || size % n !=0 ){

		std::cout << "Cannot be processed\n";
		return;
		
	}
	

	//loop n times of partitions
	for(int i = 0; i < n; i++){

		//go through the list and print the even amount of numbers
		for(int j=0; j<div; j++){

			std::cout << headnode->value;
			headnode = headnode->next;

			std::cout << "  ";
		}

		std::cout << "\n";

	}

  
}

void DoublyLinkedList::addNewNodeBeforeTargetNode(Node* newNode, int val){
	//assign a node for the targetnode and assign it to heaad
	Node *targetNode = head; 

	//making prevNode later...
	Node *prevNode;

	//as long as tartget node isn't NULL, keep going
	while(targetNode != NULL){

		//If we fid the matching value do this: 
		if(targetNode->value == val){
			//assign the value behind the target to the new node
			targetNode->prev = newNode;
			//assign the value in front of the previous node (the node that's following behind the target)
            prevNode->next = newNode;
			//assign the value behind the newnode the value that was previously there
            newNode->prev = prevNode;
			//assign the value in front of the newnode the target node.
            newNode->next = targetNode;
			break;
		}

		//prevNode will follow behind target node after each loop
		prevNode = targetNode;
		targetNode = targetNode->next;
  
}


}
	
#endif

