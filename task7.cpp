#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char **argv) { //argc - кількість аргументів командного рядка, передані програмі. argv - масив з рядків, які є аргументами командного рядка
	cout << argv[argc-1] << endl //останній аргумент командного рядка
	<< argc[argv-1] << endl; //спроба доступу до вказівника argc в масиві argv, що є недопустимою операцією. argv є вказівником на масив, тому цей вираз неможливо обчислити.
	return EXIT_SUCCESS; 
} 