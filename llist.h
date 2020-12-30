#ifndef LLIST
#define LLIST
//CS311
//INSTRUCTION:
//Llist class - header file template 
//You must complete the ** parts and then complete llist.cpp
//Don't forget PURPOSE and PARAMETERS 

// =======================================================
// HW#: HW5 llist
// Your name: Miguel Montes Cea
// Compiler:  g++ 
// File type: headher file  llist.h
//=======================================================
#include "elem.h"

// alias el_t : element type definition

//a list node is defined here as a struct Node for now
struct Node
{
	el_t Elem;		// elem is the element stored
	Node* Next;		// next is the pointer to the next node
};
//---------------------------------------------------------

class llist
{

protected:
	Node* Front;       // pointer to the front node
	Node* Rear;        // pointer to the rear node
	int  Count;        // counter for the number of nodes

public:

	// Exception handling classes 
	class Underflow {};
	class OutOfRange {};  // thrown when the specified Node is out of range

	llist();     // constructor to create a list object
	~llist();     // destructor to destroy all nodes

				  //check if the llist is empty
	bool isEmpty();

	//display all the elems in the llist
	void displayAll();

	//add a node to the front and use one parameter for the elem
	void addFront(el_t);

	//add a node to the rear and use one parameter for the elem
	void addRear(el_t);

	//delete the first node and pass by reference the deleted elem
	void deleteFront(el_t&);

	//delete the last node and pass by reference the deleted elem
	void deleteRear(el_t&);

	//delete a node at a certain postion, and pass by reference the elem deleted
	void deleteIth(int, el_t&);

	//Insert an el_t value at position int
	void insertIth(int, el_t);

	//Copy Constructor to allow pass by value and return by value
	llist(const llist&);

	//Overloading of = 
	llist& operator=(const llist&);

};
#endif // !LIST