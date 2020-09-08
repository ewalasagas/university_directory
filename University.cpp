/*********************************************************************
** Program name: Lab4
** Author: Elaine Alasagas
** Date: 2/4/2019
** Description: CS162_400_WINTER2019 -  University.cpp class - prints
	the user's information onto a file and reads information from a
	file
*********************************************************************/
#include <iostream>
#include <string>
#include <vector>
#include <limits>
#include <cmath>
#include <algorithm>
#include <fstream>
#include "University.h"
#include "Building.h"
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
using namespace std;

void University::setName(string uName)
{
	UniversityName = uName;
}

string University::getName()		//Assign name to OSU
{
	UniversityName = "Oregon State University";
	return UniversityName;
}

void University::setnunumBuilding(int m)	//Bringing private to public 
{
	numBuliding = m;
}

int University::getnumBuilding()		//Get # of buildings in vector
{
	numBuliding = build_vec.size();
	return numBuliding;
}

void University::setnumPerson(int n)		//Bringing private to public
{
	numPerson = n;
}

int University::getnumPerson()			//Get # of people in Person vector
{
	numPerson = people_vec.size();
	return numPerson;
}

void University::displayUniversity()		//Gets University name, # of bldings, # of people
{
	std::cout << "University: " << this->getName() << std::endl;
	std::cout << "Number of buildlings: " << this->getnumBuilding() << std::endl;
	std::cout << "Number of people: " << this->getnumPerson() << std::endl;
	std::cout << "-----------------------------" << std::endl;
}

std::string University::printUniversity()			//Function used to write to file
{
	std::string a = "University: " + this->getName() +
		"\n-----------------------------" +
		"\nNumber of buildlings: " + std::to_string(this->getnumBuilding()) +
		"\nNumber of people: " + std::to_string(this->getnumPerson()) +
		"\n-----------------------------" +
		"\n";
	return a;
}

void University::peoplePrint()		//Opening a file "Lab4.txt"
{
	ofstream myfile;
	myfile.open("Lab4.txt", ios::out);
	myfile.is_open();

	for (int i = 0; i < build_vec.size(); i++)		//Printing buildling vector
	{
		myfile << build_vec[i]->toString();
	}
/*
	for (int i = 0; i < people_vec.size(); i++)		//Printing people vector
	{
		myfile << people_vec[i]->toString();
	}
	*/
	myfile << printUniversity();						//Printing University
	myfile.close();
}

void University::openFile()		//Opening a file "Lab4.txt"
{
	ofstream myfile;
	myfile.open("Lab4.txt", ios::app);
	myfile.is_open();

	for (int i = 0; i < build_vec.size(); i++)		//Printing buildling vector
	{
		cout << build_vec[i]->toString();
	}

	for (int i = 0; i < people_vec.size(); i++)		//Printing people vector
	{
		cout << people_vec[i]->toString();
	}
	cout << printUniversity();						//Printing University
	myfile.close();
}

void University::displayPersonName()	//display each person's name in vector 
{
	for (int i = 1; i < people_vec.size(); i++)
	{
		std::cout << i << ". " << people_vec[i]->getName() << std::endl;	//Display list of names
	}
}

void University::doWork(int i)		//Prints out do-work function depending if on student/instructor
{
	people_vec[i]->do_work();
}

void University::addBuildlings(vector<Building*> b)		//Adding buildings
{
	for (int i = 0; i < b.size(); i++)
		this->build_vec.push_back(b[i]);
}

void University::displayBuildings()		//Display buildings
{
	for (int i = 0; i < build_vec.size(); i++)
	{
		build_vec[i]->print();
	}
}

void University::addPeople(vector<Person*> p)	//Add people to person vector in main manually
{
	for (int i = 0; i < p.size(); i++)
		this->people_vec.push_back(p[i]);
}

void University::displayPeople()		//Print people
{
	for (int i = 0; i < people_vec.size(); i++)
	{
		people_vec[i]->print();
	}
}

University::~University()		//Destructor
{}