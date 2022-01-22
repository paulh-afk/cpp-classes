all: project clear

project: personnage.o main.o
	g++ personnage.o main.o -o ./project

personnage.o: ./Sources/Personnage.cpp
	g++ -c ./Sources/Personnage.cpp -o personnage.o

main.o: ./Sources/main.cpp
	g++ -c ./Sources/main.cpp -o main.o

clear:
	rm *.o
	clear

