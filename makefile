all : clock.o sort.o
	g++ -o sort clock.o sort.o
clock.o: clock.h clock.cpp
	g++ -c clock.cpp
sort.o: sort.cpp clock.h
	g++ -c sort.cpp
