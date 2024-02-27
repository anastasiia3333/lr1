#include <iostream>
using namespace std;

class stack{
    char *stck; // вказівник на масив для зберігання елементів стеку
    int tos; // індекс вершини стеку
    int size; // розмір стеку
public:
    stack(int n); // конструктор, який приймає розмір стеку як параметр
    ~stack(); // деструктор, який звільняє пам’ять
    void push (char ch); // метод, який додає елемент в стек
    char pop(); // метод, який видаляє елемент зі стеку
};

// конструктор, який приймає розмір стеку як параметр
stack::stack(int n) {
    cout << "Constructing a stack of size " << n << "\n";
    size = n; // зберігаємо розмір стеку
    tos = 0; // початкове значення індексу вершини стеку
    stck = new char[size]; // виділяємо пам’ять для масиву стеку
}

// деструктор, який звільняє пам’ять
stack::~stack() {
    cout << "Destroying the stack\n";
    delete[] stck; // звільняємо пам’ять, виділену для масиву стеку
}

// метод, який додає елемент в стек
void stack::push(char ch) { // вказуємо тип даних для параметра ch
    if (tos == size) { // перевіряємо, чи стек повний
        cout << "Stack is full\n"; // виводимо повідомлення про помилку
        return; // виходимо з методу
    }
    stck[tos] = ch; // присвоюємо stck[tos] значення ch
    tos++; // збільшуємо tos на одиницю
}

// метод, який видаляє елемент зі стеку
char stack::pop() {
    if (tos == 0) { // перевіряємо, чи стек порожній
        cout << "Stack is empty\n"; // виводимо повідомлення про помилку
        return 0; // повертаємо 0 як значення за замовчуванням
    }
    tos--; // зменшуємо tos на одиницю
    return stck[tos]; // повертаємо stck[tos] як значення
}

int main (){
    stack s1(3), s2(5);
    int i;
    s1.push('a');
    s2.push('x');
    s1.push('q');
    s2.push('u');
    s1.push('r');
    s2.push('b');
    s2.push('o');
    s2.push('p');
    for (i=0; i < 3; i++)
        cout << "Pop s1: " << s1.pop() << "\n";
    for (i=0; i < 5; i++)
        cout << "Pop s2: " << s2.pop() << "\n";
}