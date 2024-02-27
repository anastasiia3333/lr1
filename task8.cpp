#include <iostream> 
#include <cmath> //ліба для використання кореня
using namespace std;

int my_root(int n);
long my_root(long n);
double my_root(double n);

int main () {
	cout << "A square of 16: " << my_root(16) << endl;
	cout << "A square of 16L: " << my_root(16L) << endl;
	cout << "A square of 16.04: " << my_root(16.04) << endl;
}

int my_root(int n) {
	cout << "In integer my_root()"<< endl;
	return n < 0 ? EXIT_FAILURE : sqrt(n);
}

long my_root(long n) {
	cout << "In long my_root()" << endl;
	return n < 0 ? EXIT_FAILURE : sqrt(n);
}

double my_root(double n) {
	cout << "In double my_root()" << endl;
	return n < 0 ? EXIT_FAILURE : sqrt(n);
}