#include <iostream>
using namespace std;

char min(char x, char y);
int min(int x, int y);
double min(double x, double y);

int main() {
    int a = 9, b = 2;
    double c = 4.8, d = 7.6;
    char e = 'k', f = 'y';
    cout << "Minimum between " << e << " and " << f << " is " << min(e, f) << endl;
    cout << "Minimum between " << a << " and " << b << " is " << min(a, b) << endl;
    cout << "Minimum between " << c << " and " << d << " is " << min(c, d) << endl;
    return 0;
}

char min(char x, char y) {
    return (x < y) ? x : y;
}

int min(int x, int y) {
    return (x < y) ? x : y;
}

double min(double x, double y) {
    return (x < y) ? x : y;
}