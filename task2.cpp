#include <iostream>
using namespace std;

int main() {
    double metres;
    double pounds;
    double inch;

    cout << "Enter your number in metres and it will be converted to pounds and inches: ";
    cin >> metres;

    while (metres != 0) { // цикл буде працювати допоки користувач не введе 0
        pounds = metres * 3.28; //шукаємо значення футів
        inch = metres * 39.37; //шукаємо значення дюймів

        cout << "Your number in pounds: " << pounds << " lbs" << endl;
        cout << "Your number in inches: " << inch << " in" << endl;

        cout << "Enter your number in metres (0 to exit): " << endl;
        cin >> metres;
    }
    cout << "The program is finished!";
    return 0;
}