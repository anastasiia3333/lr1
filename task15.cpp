#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;
#define SIZE 255

class strtype{
    char *p; // вказівник на рядок
    int len; // довжина рядка
public:
    strtype(const char *ptr); // конструктор з параметром
    ~strtype(); // деструктор
    void show(); // метод для виводу рядка
};

// конструктор з параметром, який приймає вказівник на рядок
strtype::strtype(const char *ptr) {
    // виділяємо пам'ять для рядка
    p = (char *) malloc(SIZE);
    // перевіряємо, чи вдалося виділити пам'ять
    if (!p){
        cout << "Allocation error.\n";
        exit (1);
    }
    strcpy(p, ptr);
    len = strlen(p);
}

strtype::~strtype() {
    cout << "Freeing p\n";
    free(p);
}

void strtype::show() {
    cout << p << "-length :" << len;
    cout << "\n";
}

int main (){
    strtype s1("This is a test");
    strtype s2("I like C++");
    s1.show();
    s2.show();
    return 0;
}