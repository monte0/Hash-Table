// CS311 - Hash Table - complete all ** parts.
// Note: this class does not know the parts of element except for key
// so that it would work even if each element in the hash table changed
//-----------------------------------------------------

// ============================================
// HW#: HW11 Hash Table
// Name: Miguel Cea
// File Type: implementation htable.cpp
// =============================================

using namespace std;
#include <iostream>
#include "htable.h"

htable::htable()
{
}

htable::~htable()
{
}

// a simple hash function that uses % TSIZE simply (mod TSIZE)
int htable::hash(int key)
{
	return key % TSIZE;
}

// adds the element to the table and returns slot#
int htable::add(el_t element)
{
	int slot = hash(element.key);  // hash with the key part
	table[slot].addRear(element);
	return slot;
}

// finds element using the skey and returns the found element itself
// or a blank element
el_t htable::find(int skey)
{
	el_t E; // a blank element
	int slot = hash(skey); // hash with skey
	el_t selement;  // this is the element to look for in slist
	selement.key = skey; // initialize it with just the skey
	selement = table[slot].search2(selement); // call slist's search2 with selement which returns the found element 
/*	if (selement == E) //check if the elmenet was blank or not
		return E;		//return blank
	else//not blank
		return selement;*/
	return selement;	//return element
}

// displays the entire table with slot#s too
void htable::displayTable()
{
	for (int i = 0; i < 37; i++)
	{
		cout << i << ":";
		table[i].displayAll();	// call slist's displayAll
	}
}