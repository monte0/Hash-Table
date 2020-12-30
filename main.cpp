// CS311 - complete ** for HW11 client
// Note that the client knows about elem.h functions.
// It can create el_t objects.
//-----------------------------------------------

//============================================
// HW#: HW11 hashing client
// Name: Miguel Cea
// File type: client hw11client.cpp
//===========================================
#include <iostream>
#include "htable.h"

using namespace std;

// note that the second constructor of el_t can be used to
// create key+name to add to the table.
int main()
{
	htable myT;
	el_t blank;											//a blank element to compare to 
	string myname;										//name that goes into an element
	int tmpkey;											//key to the element
	for (int i = 0; i < 5; i++)//Loop:
	{
		cout << "Enter a name to the table: " << endl;
		cin >> myname;									//Interactively add about 20 keys and names to the table,
		cout << "And enter a key: ";					//making sure some of them  collide. (function add)
		cin >> tmpkey;									//You can create el_t containing a key and name using a constructor.
		el_t tmp(tmpkey, myname);						//make a element with the info from user
		myT.add(tmp);									//add that element to htable
	}

	myT.displayTable();			//DisplayTable.

	for (int i = 0; i < 6; i++)//looks up 6 elements
	{
		cout << "Tmpkey to look for? ";
		cin >> tmpkey;
		if (!(myT.find(tmpkey) == blank))		//Interactively look up names using keys. (function find)
		{
			cout << "Found " << tmpkey << ": " << myT.find(tmpkey) << endl;	//found elem in slist
		}
		else//not found
		{
			cout << tmpkey << " not found." << endl;
		}
	}
}