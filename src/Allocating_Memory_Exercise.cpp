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
    int xTimes = 0;
    string dogName(1, letters);

    Dogs *woof = new Dogs[25];

    for (int xTimes = 0; xTimes < 25; xTimes++)
	{
	woof[xTimes].setName(dogName);
	woof[xTimes].speak();
	cout << " .I'm number " << xTimes << endl;

	}

    delete[] woof;

    return 0;
    }
