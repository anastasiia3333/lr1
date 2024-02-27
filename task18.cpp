#include <iostream>
using namespace std;

class myBox {
    double a, b, c;
    double volume;

public:
    myBox(double sideA, double sideB, double sideC)
    : a(sideA), b(sideB), c(sideC), volume(sideA * sideB * sideC) {}

    void showVolume() {
        cout << "Volume is equal to: " << volume << endl;
    }
};

int main() {
    double a, b, c;
    cout << "Enter the length, width and height of the box : ";
    cin >> a >> b >> c;
    myBox box(a, b, c);
    box.showVolume();
    return 0;
}
