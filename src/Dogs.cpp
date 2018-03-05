/*
 * Dogs.cpp
 *
 *  Created on: Mar 1, 2018
 *      Author: jpetterson
 */

#include "Dogs.h"

Dogs::Dogs()
    {
    
    }

Dogs::~Dogs()
    {
    //destructor
    }

void Dogs::setName(string nameInput)
    {
    this->name = nameInput;	//change name
    }

void Dogs::speak()
    {
    cout << "Hi, my name is " << name << flush;	//output
    }


void Dogs::speak2()
    {
    cout << "Hi, my name is " << name << endl;	//output
    }
