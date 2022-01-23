all: project clear

project: arme.o personnage.o main.o
	g++ arme.o personnage.o main.o -o ./project

arme.o: ./Sources/Arme.cpp
	g++ -c ./Sources/Arme.cpp -o arme.o

personnage.o: ./Sources/Personnage.cpp
	g++ -c ./Sources/Personnage.cpp -o personnage.o

main.o: ./Sources/main.cpp
	g++ -c ./Sources/main.cpp -o main.o

clear:
	rm *.o
	clear
	./project

