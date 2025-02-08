The_Race: Horse.o main.o
	g++ Horse.o main.o -o The_Race

Horse.o: Horse.cpp Horse.h
	g++ -c Horse.cpp

main.o: main.cpp Horse.h
	g++ -c main.cpp

clean: 
	rm *.o

run: The_Race
	./The_Race
