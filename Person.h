/*********************************************************************
** Program name: Lab4
** Author: Elaine Alasagas
** Date: 2/4/2019
** Description: CS162_400_WINTER2019 -  Person.hpp class
*********************************************************************/
#include <iostream>
#include <string>
#include <vector>
#include <limits>
#include <cmath>
#include <algorithm>
#include <fstream>
#include "Instructor.h"
#include "Student.h"
using namespace std;

#ifndef PERSON_H
#define PERSON_H

class Person {
protected:
	std::string name;	//To get name
	int age;		//To get age

public:
	Person();		//default constructor to return name and age
	Person(std::string n, int a);	//To set the name
	void setName(string n);		//Person setter
	virtual string getName() const;		//Virtual Person getter
	void setAge(int a);		 //Age setter
	virtual int getAge() const;			//Virtual Age getter
	virtual void print() = 0;
	virtual void do_work() = 0;
	virtual string toString() = 0;
	~Person();		//destructor
};

#endif
