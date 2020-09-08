/*********************************************************************
** Program name: Lab4
** Author: Elaine Alasagas
** Date: 2/4/2019
** Description: CS162_400_WINTER2019 -  Instructor.hpp class
*********************************************************************/
#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include <iostream>
#include <string>
#include <vector>
#include <limits>
#include <cmath>
#include <algorithm>
#include <fstream>
#include "Person.h"
using namespace std;

class Instructor : public Person {
private:
	double rating;
protected:
public:
	Instructor();
	Instructor(string iname, int iage, double r);
	void setRating(double r);
	double getRating() const;
	void print();
	string toString();
	void do_work();
	~Instructor();
};

#endif