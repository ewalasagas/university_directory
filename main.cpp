/*********************************************************************
** Program name: Lab4
** Author: Elaine Alasagas
** Date: 2/4/2019
** Description: CS162_400_WINTER2019 -  Instructor.hpp class
*********************************************************************/
#include <iostream>
#include <string>
#include <vector>
#include <limits>
#include <cmath>
#include <algorithm>
#include <fstream>
#include<bits/stdc++.h>
#include "Building.h"
#include "University.h"
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
using namespace std;

int main()
{
	int choice;
	University *obj = new University();
	Student *stu = new Student();
	Instructor *instruct = new Instructor();

	//for adding in a person
	string a = stu->getName();
	int b = stu->getAge();
	double c = stu->getGPA();

	//for adding in an instructor
	string d = instruct->getName();
	int e = instruct->getAge();
	double f = instruct->getRating();
	
	//People add (manual)
	vector<Person*> test;
	test.push_back(new Student("Harry Potter", 12, 4.0));
	test.push_back(new Student("Hermione Granger", 12, 4.0));
	test.push_back(new Student("Ron Weasley", 12, 3.0));
	test.push_back(new Instructor("Minerva McGonagall", 55, 5.0));
	test.push_back(new Instructor("Horace Slughorn", 45, 4.8));
	test.push_back(new Instructor("Quirinus Quirrell", 38, 2.2));

	obj->addPeople(test);

	//Building add (manual)
	vector<Building*> test2;
	test2.push_back(new Building("Adams Hall", 11168, "606 SW 15TH Street, Corvallis, OR"));
	test2.push_back(new Building("Aero Engineering Lab", 3637, "852 SW 30th street, Corvallis, OR"));
	test2.push_back(new Building("Agricultural & Life Sciences Building", 185629, "2750 SW Campus Way, Corvallis, OR"));
	test2.push_back(new Building("Austin Hall", 107613, "2751 SW Jefferson Way, Corvallis, OR"));

	obj->addBuildlings(test2);

	obj->displayUniversity();		//Display # of people and buildings
	std::cout << std::endl;			//break

	char yesorno;

	do //for loop menu
	{
		//Menu
		std::cout << "Please choose from the following 1-6: " << std::endl;
		std::cout << "(1) Open file Lab4.txt?" << std::endl;
		std::cout << "(2) Print information about all buildings " << std::endl;
		std::cout << "(3) Print information of everbody at the university " << std::endl;
		std::cout << "(4) Choose a person to do work " << std::endl;
		std::cout << "(5) Add a person " << std::endl;
		std::cout << "(6) Exit the program " << std::endl;
		while (true)	//input validation menu choice
		{
			std::cout << "Choose: ";
			if (std::cin >> choice && (choice > 0 && choice < 7))
			{
				break;
			}
			else
			{
				std::cout << "Please enter a valid choice between 1 and 6" << std::endl;
				std::cin.clear();
				std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
			}
		}

		std::cout << std::endl;
		switch (choice) {

			//Open file 
			case 1: cout << "File Lab4.txt is open" << std::endl;
					obj->openFile();
					break;

			//Prints info about buildings
			case 2: obj->displayBuildings();
					break;

			//Prints info about people
			case 3: obj->displayPeople();
					break;

			//Print people and get person to do work
			case 4: char workYN;
					do {
					int choiceWork;
					obj->displayPersonName();
					while (true)	//input validation menu choice
					{
						std::cout << "Please enter the # of the person to do work: " << std::endl;
						if (std::cin >> choiceWork && (choiceWork > 0 && choiceWork < (obj->getnumPerson())))
						{
							break;
						}
						else
						{
							std::cout << "Please enter a valid choice between 1 and " << (obj->getnumPerson()-1) << std::endl;
							std::cin.clear();
							std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
						}
					}
					obj->doWork(choiceWork);
					std::cout << "Pick another person to do work? (Y/N) " << std::endl;
					cin >> workYN;
					} while (workYN == 'Y' || workYN == 'y');
					break;

			//Add a student or instructor
			case 5:	char add;
				do {
					int addPerson;
					while (true)	//input validation menu choice
					{
						std::cout << "Choose which person to add: " << endl;
						std::cout << "(1) Student " << endl;
						std::cout << "(2) Instructor " << endl;
						std::cout << "Choice: ";
						if (std::cin >> addPerson && (addPerson ==1 || addPerson == 2))
						{
							break;
						}
						else
						{
							std::cout << "Please enter a valid choice between 1 and 2" << std::endl;
							std::cin.clear();
							std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
						}
					}
					if (addPerson == 1)	//Adding a student
					{						
						string name2;
						std::cin.clear();
						std::cin.sync();
						std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
						std::cout << "Enter Student Name: ";
						std::getline(std::cin, name2);
					    a = name2;
						while (true)	//input validation menu choice
						{
							std::cout << "Enter Student Age: ";
							if (std::cin >> b && (b > 0))
							{
								break;
							}
							else
							{
								std::cout << "Please enter a valid choice greater than 0" << std::endl;
								std::cin.clear();
								std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
							}
						}

						while (true)	//input validation menu choice
						{
							std::cout << "Enter Student GPA: ";
							if (std::cin >> c && (c > 0.0 && c < 4.0))
							{
								break;
							}
							else
							{
								std::cout << "Please enter a valid GPA between 0 and 4.0" << std::endl;
								std::cin.clear();
								std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
							}
						}

						test.push_back(new Student(a, b, c));
						obj->addPeople(test);
		
					}
					else if (addPerson == 2)	//Adding an instructor
					{
						string name1;
						std::cin.clear();
						std::cin.sync();
						std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
						std::cout << "Enter Instructor Name: ";
						std::getline(std::cin, name1);
					    d = name1;
					    
						while (true)	//input validation greater than 0
						{
							std::cout << "Enter Instructor Age: ";
							if (std::cin >> e && (e > 0))
							{
								break;
							}
							else
							{
							std::cout << "Please enter a valid choice" << std::endl;
							std::cin.clear();
							std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
							}
						}
						while (true)	//input validation instructor rating
						{
							std::cout << "Enter Instructor Rating: ";
							if (std::cin >> f && (f > 0.0 && f <= 5.0))
							{
							break;
							}
							else
							{
							std::cout << "Please enter a valid Rating between 0 and 5.0" << std::endl;
							std::cin.clear();
							std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
							}
						}

						test.push_back(new Instructor(d, e, f));
						obj->addPeople(test);
					}

					obj->displayPeople();

					std::cout << "Add another person? (Y/N)" << std::endl;
					std::cin >> add;
				} while (add == 'Y' || add == 'y');		//Loop for adding a menu
				break;

			case 6:		//Exit the program
				std::cout << "Exit program. " << std::endl;

				//Delete unfreed memory of manual inputted vector of people
				for (int i = 0; i < test.size(); i++)
				{
					delete test[i];
				}

				//Delete unfreed memory of buildings
				for (int j = 0; j < test2.size(); j++)
				{
					delete test2[j];
				}

				delete obj;
				delete stu;
				delete instruct;
				return 0;
			}


			//obj->displayPeople();

			//Ask user if they want to save to file "Lab4.txt"?
			char save;
			std::cout << "Save to file Lab4.txt? (Y/N)" << std::endl;
			cin >> save;
			if (save == 'y' || save == 'Y')
				{
					obj->peoplePrint();		//prints to file (out)
				}

			std::cout << "Return to menu? (Y/N)" << std::endl;
			std::cin >> yesorno;
		}	while (yesorno == 'Y' || yesorno == 'y');


		//Delete unfreed memory of manual inputted vector of people
		for (int i = 0; i < test.size(); i++)
		{
			delete test[i];
		}

		//Delete unfreed memory of buildings
		for (int j = 0; j < test2.size(); j++)
		{
			delete test2[j];
		}

	delete obj;
	delete stu;
	delete instruct;
	return 0;
}