#include <iostream>
using namespace std;

int gcd(int a, int b);

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    int common_divisor = gcd(a, b);
    int common_multiple = (a * b) / common_divisor;

    cout << "The lowest common denominator is " << common_multiple << endl;
    return 0;
}

// Функція для знаходження НСД
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b; //значення b присвоюється змінній temp
        b = a % b; //b приймає значення залишку від ділення a на b
        a = temp; //a пиймає значення temp, яке було рівне b
    }
    return a;
}
