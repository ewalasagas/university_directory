/*********************************************************************
** Program name: Lab4
** Author: Elaine Alasagas
** Date: 2/4/2019
** Description: CS162_400_WINTER2019 -  Buildling.hpp class
*********************************************************************/
#include <iostream>
#include <string>
#include <vector>
#include <limits>
#include <cmath>
#include <algorithm>
#include <fstream>
#include "Building.h"
using namespace std;

Building::Building() {};


Building::Building(string bname, int s, string a)
	{
		setName(bname);
		setSize(s);
		setAddress(a);
	}

void Building::setName(string bname) 
{
	this->bldName = bname; 
}

string Building::getName()		//virtual name for Base class to use
{ 
	return bldName; 
}		

void Building::setSize(int s) 
{ 
	this->size = s; 
}

int Building::getSize() 
{ 
	return size; 
}

void Building::setAddress(std::string a) 
{ 
	this->address = a; 
}
	
std::string Building::getAddress() 
{ 
	return address; 
}

void Building::print()
{
	std::cout << "-----------------------------" << std::endl;
	std::cout << "Buildling Name: " << this->getName() << std::endl;
	std::cout << "Building Size: " << this->getSize() << std::endl;
	std::cout << "Buildilng Address: " << this->getAddress() << std::endl;
}

std::string Building::toString()
{
	string a = "Buildling Name: " + this->getName() +
		"\nBuilding Size: " + to_string(this->getSize()) +
		"\nBuildilng Address: " + this->getAddress() +
		"\n-----------------------------" +
		"\n";
	return a;
}

Building::~Building()
{ }