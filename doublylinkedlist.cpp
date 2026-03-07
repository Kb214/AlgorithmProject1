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
  // CODE TO BE ADDED for Project 1
  //	Might reuse displayDoublyLinkedList()
}


bool DoublyLinkedList::isPalindrome()
{
  // CODE TO BE ADDED for Project 1
   
}

void DoublyLinkedList::split(int n) // n is the number of even partitions
{
  // CODE TO BE ADDED for Project 1
  
}

void DoublyLinkedList::addNewNodeBeforeTargetNode(Node* newNode, int val)
{
  // CODE TO BE ADDED for Project 1
  
}

#endif

