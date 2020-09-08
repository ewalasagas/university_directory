output: main.o Building.o Instructor.o Student.o Person.o University.o
	g++ -std=c++11 main.o Building.o Instructor.o Student.o Person.o University.o -g -o Dir

main.o: main.cpp Building.o Instructor.o Student.o Person.o University.o
	g++ -std=c++11 -c main.cpp

Person.o:
	g++ -std=c++11 -c Person.cpp Person.h

Instructor.o:
	g++ -std=c++11 -c Instructor.cpp Instructor.h

Student.o:
	g++ -std=c++11 -c Student.cpp Student.h

Building.o:
	g++ -std=c++11 -c Building.cpp Building.h

University.o:
	g++ -std=c++11 -c University.cpp University.h

clean:
	rm *.o *.gch Dir
