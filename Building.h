/*********************************************************************
** Program name: Lab4
** Author: Elaine Alasagas
** Date: 2/4/2019
** Description: CS162_400_WINTER2019 -  Building.hpp class
*********************************************************************/

#ifndef BUILDING_H
#define BUILDING_H

#include <iostream>
#include <string>
#include <vector>
#include <limits>
#include <cmath>
#include <algorithm>
#include <fstream>
using namespace std;

class Building {
private:
	string bldName;
	int size;
	string address;
protected:
public:
	Building();		//constructor
	Building(string bname, int s, string a);
	void setName(string bname);
	string getName();	//virtual name for Base class to use
	void setSize(int s);
	int getSize();
	void setAddress(string a);
	string getAddress();
	void print();
	string toString();
	~Building();	//destructor
};

#endif