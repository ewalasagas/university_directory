/*********************************************************************
** Program name: Lab4
** Author: Elaine Alasagas
** Date: 2/4/2019
** Description: CS162_400_WINTER2019 -  University.hpp class
*********************************************************************/

#ifndef UNIVERSITY_H
#define UNIVERSITY_H

#include <iostream>
#include <string>
#include <vector>
#include <limits>
#include <cmath>
#include <algorithm>
#include <fstream>
#include "Person.h"
#include "Building.h"
using namespace std;

class University {
private:
	std::string UniversityName;
	int numBuliding;	//number of building objects
	int numPerson;		//number of person objects
	std::vector<Person*> people_vec;
	std::vector<Building*> build_vec;
public:
	void setName(std::string uName);		//Sets name to OSU
	std::string getName();
	void setnunumBuilding(int m);	//Get # of buildings in std::std::vector
	int getnumBuilding();
	void setnumPerson(int n);
	int getnumPerson();		//Get # of people in std::vector
	void displayUniversity();
	std::string printUniversity();
	void addPeople(std::vector<Person*> p);	//Adding person/people
	void displayPeople();		//Display people
	void peoplePrint();		//Display University, people, and buildings
	void openFile();		//Opens the same file
	void displayPersonName();	//display each person's name in std::vector 
	void doWork(int i);
	void addBuildlings(std::vector<Building*> b);		//Adding buildings
	void displayBuildings();		//Display people
	~University();	//destructor
};
#endif
