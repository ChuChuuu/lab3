all:lab3.o
	g++ -o lab3 lab3.cpp
Sort : clock.o sort.o
	g++ -o sort clock.o sort.o
clock.o: clock.h clock.cpp
	g++ -c clock.cpp
sort.o: sort.cpp clock.h
	g++ -c sort.cpp
clear: 
	rm sort.o clock.o lab3.o
