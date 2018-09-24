bankExec: ./src/main.cpp ./include/Banque.h ./include/Compte.h
	g++ -o bankExec ./src/main.cpp ./src/Banque.cpp ./src/Compte.cpp
