//============================================================================
// Name        : Allocating_Memory_Exercise.cpp
//
//	Create a class
//	Instance string (name)
//	Method to set that string (setName)
//	Method to output string (speak)
//	Create 26 'things'(array) with new constructor
//	set the name of each of them a-z
//
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Dogs.h"

using namespace std;

int main()
    {
    char letters = 'a';
    int x = 0;
    char *change = &letters;

    Dogs *woof = new Dogs[25];
    while (x < 25)
	{
	string dogName(2, *change);

	woof[x].setName(dogName);
	woof[x].speak();

	cout << ". And I'm number " << x << endl;

	x++;
	letters++;
	}

    cout << "-----------------------------------" << endl;
    woof[17].speak2();
    cout << "-----------------------------------" << endl;
    delete[] woof;

    cout << endl;

    //////////////// ------ or ------ ////////////////

    Dogs *brown = new Dogs[25]; // make 25 brown, starts at 0 remember

    char nameLetter = 'A';
    for (int num = 0; num < 25; num++, nameLetter++)
	{
	string newName(1, nameLetter);
	brown[num].setName(newName);
	brown[num].speak2();
	}
    cout << "-----------------------------------" << endl;
    brown[4].speak2();
    cout << "-----------------------------------" << endl;


    delete[] brown; //delete from mem

    return 0;
    }
