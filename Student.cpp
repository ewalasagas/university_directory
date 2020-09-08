/*********************************************************************
** Program name: Lab4
** Author: Elaine Alasagas
** Date: 2/4/2019
** Description: CS162_400_WINTER2019 -  Student.cpp class
*********************************************************************/

#include <iostream>
#include <string>
#include <vector>
#include <limits>
#include <cmath>
#include <algorithm>
#include <fstream>
#include "Person.h"
#include "Student.h"
using namespace std;

Student::Student() {}

Student::Student(std::string sname, int sage, double g) : Person(sname, sage)
{
	setGPA(g);
}

void Student::setGPA(double g)
{ 
	this->GPA = g; 
}

double Student::getGPA() const
{ 
	return GPA; 
}

void Student::print()
{
	std::cout << "Name: " << this->getName() << std::endl;
	std::cout << "Age: " << this->getAge() << std::endl;
	std::cout << "GPA: " << this->getGPA() << std::endl;
	std::cout << "-----------------------------" << std::endl;
}

string Student::toString()
{
	string a = "Name: " + this->getName() +
		"\nAge: " + std::to_string(this->getAge()) +
		"\nGPA:	" + std::to_string(this->getGPA()) +
		"\n-----------------------------" +
		"\n";
	return a;
}

void Student::do_work()
{
	int x;
	x = rand() % 8 + 1;
	std::cout << this->getName() << " did " << x << " hours of homework. " << std::endl;
}

Student::~Student()
{ }

