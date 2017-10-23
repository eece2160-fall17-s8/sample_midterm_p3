all:main

main: main.o Hospital.o Building.o
	g++ main.o Hospital.o Building.o -o main
	
main.o: main.cc
	g++ main.cc -c -o main.o

Hospital.o: Hospital.cc Hospital.h
	g++ Hospital.cc -c -o Hospital.o

Building.o: Building.cc Building.h
	g++ Building.cc -c -o Building.o

clean:
	rm *.o main
