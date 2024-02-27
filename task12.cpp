#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int a,b; 
	cout << "Enter two integers: ";
	cin >> a >> b;
	int result = pow(a,b);
	cout << a << "^" << b << " equals to " << result;
	return 0;
}