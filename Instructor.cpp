/*********************************************************************
** Program name: Lab4
** Author: Elaine Alasagas
** Date: 2/4/2019
** Description: CS162_400_WINTER2019 -  Instructor.cpp class
*********************************************************************/
#include <iostream>
#include <string>
#include <vector>
#include <limits>
#include <cmath>
#include <algorithm>
#include <fstream>
#include "Instructor.h"
#include "Person.h"
using namespace std;

Instructor::Instructor()		//constructor
{};


Instructor::Instructor(std::string iname, int iage, double r) : Person(iname, iage)
{
	setRating(r);
}

void Instructor::setRating(double r) 
{ 
	this->rating = r;
}

double Instructor::getRating() const 
{
	return rating; 
}

void Instructor::print()
{
	std::cout << "Name: " << this->getName() << std::endl;
	std::cout << "Age: " << this->getAge() << std::endl;
	std::cout << "Rating: " << this->getRating() << std::endl;
	std::cout << "-----------------------------" << std::endl;
}

string Instructor::toString()
{
	std::string a = "Name: " + this->getName() +
		"\nAge: " + std::to_string(this->getAge()) +
		"\nRating: " + std::to_string(this->getRating()) +
		"\n-----------------------------" +
		"\n";
	return a;
}

void Instructor::do_work()
{
	int x;
	x = rand() % 8 + 1;
	std::cout << this->getName() << " graded papers for " << x << " hours. " << std::endl;
}

Instructor::~Instructor()
{ }
