all: bsort.exe

bsort.exe: main.o bubblesortClass.o
	g++ main.o bubblesortClass.o -o bsort

main.o: bubblesortClass.h main.cpp
	g++ -c main.cpp

bubblesortClass.o: bubblesortClass.cpp bubblesortClass.h
	g++ -c bubblesortClass.cpp
