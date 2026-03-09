// #ifndef DOUBLYLINKEDLIST_CPP
// #define DOUBLYLINKEDLIST_CPP

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
 
  Node* tempNode = head;

  while(tempNode != NULL){
	cout << "[address:" << tempNode 
	<< ", prev:" << tempNode->prev 
	<< ", value: " << tempNode->value 
	<< ", next: " << tempNode->next << "]\n";

	tempNode = tempNode->next;
  }

}


bool DoublyLinkedList::isPalindrome()
{

	Node* headnode = head;
	Node* tailnode = tail;

	
	if(headnode == NULL && tailnode == NULL){
		return true;
	}

	while(headnode != tailnode && headnode != tailnode->next){
		

		if(headnode->value != tailnode->value){

			return false;
		}

		headnode = headnode->next;
		tailnode = tailnode->prev;
		

	}

	return true;

}

void DoublyLinkedList::split(int n) // n is the number of even partitions
{	
 	Node* headnode = head;

	//checks size of list
	int size = 0;
	while(headnode != NULL){

		size++;
		headnode = headnode->next;
	}
	headnode = head;	


	//divides the size of the list 
	int div = size/n;


	if(n<1 || n>size || size % n !=0 ){

		std::cout << "Cannot be processed\n";
		return;
		
	}
	

	for(int i = 0; i < n; i++){

		for(int j=0; j<div; j++){

			std::cout << headnode->value;
			headnode = headnode->next;

			std::cout << "  ";
		}

		std::cout << "\n";

	}

  
}

// void DoublyLinkedList::addNewNodeBeforeTargetNode(Node* newNode, int val)
// {

  
// }

// #endif

