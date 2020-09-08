/*********************************************************************
** Program name: Lab4
** Author: Elaine Alasagas
** Date: 2/4/2019
** Description: CS162_400_WINTER2019 -  Student.hpp class
*********************************************************************/

#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <string>
#include <vector>
#include <limits>
#include <cmath>
#include <algorithm>
#include <fstream>
#include "Person.h"
using namespace std;

class Student : public Person {
private:
	double GPA;
protected:
public:
	Student();
	Student(string sname, int sage, double g);
	void setGPA(double g);
	double getGPA() const;
	void print();
	string toString();
	void do_work();
	~Student();
};
#endif
