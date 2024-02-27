#include <iostream>
using namespace std;

int atof(const char *s);

int main() {
    const char *s = "12.34";
    double d = atof(s);
    cout << "Result: " << d << endl;
    return 0;
}

int atof(const char *s) {
    cout << "This is my atof() function" << endl;
    return 1;
}

//Ці функції (atof, atoi, atol) не можна перевантажити, так як це функції зі стандартної бібліотеки C++, і ми не можемо змінювати або перевантажувати вбудовані функції.