/*
 * Dogs.h
 *
 *  Created on: Mar 1, 2018
 *      Author: jpetterson
 */

#ifndef DOGS_H_
#define DOGS_H_
#include <iostream>
using namespace std;

class Dogs
    {
    private:
	string name;

    public:
	Dogs();		//constructor
	~Dogs();	//destructor
	void setName(string nameInput);	//change name
	void speak();	//output with flush
	void speak2();	//output with endl
    };

#endif /* DOGS_H_ */
