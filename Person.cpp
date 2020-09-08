/*********************************************************************
** Program name: Lab4
** Author: Elaine Alasagas
** Date: 2/4/2019
** Description: CS162_400_WINTER2019 -  Person.cpp class - polymorhic
	class - main functions are geting info from Instructor/Student 
*********************************************************************/
#include <iostream>
#include <string>
#include <vector>
#include <limits>
#include <cmath>
#include <algorithm>
#include <fstream>
#include "Person.h"
#include "Instructor.h"
#include "Student.h"
using namespace std;


Person::Person()	 //default constructor to return name and age
{ 
	setName(""); 
}	


Person::Person(string n, int a)		//To set the name
{ 
	setName(n); setAge(a); 
}	

void Person::setName(string n)		//Person setter
{ 
	name = n; 
}	

string Person::getName() const 		//Virtual Person getter
{ 
	return name; 
} 

void Person::setAge(int a)		//Age setter
{ 
	age = a; 
}	

 int Person::getAge() const		//Virtual Age getter
{ 
	return age; 
}	

 Person::~Person()
 { }
