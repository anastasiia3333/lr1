#include <iostream>
using namespace std;

class q_type { // Клас циклічної черги цілих чисел
    int queue[100]; // масив, що містить чергу
    int head, tail; 

public:
    // Конструктор класу, який ініціалізує чергу
    q_type() {
        head = tail = -1; // черга порожня
    }

    // Метод, який додає ціле число до черги
    void q(int num) {
        // Якщо черга повна, вивести повідомлення
        if ((tail + 1) % 100 == head) {
            cout << "Queue is full\n";
            return;
        }
        // Інакше, збільшити хвіст на одиницю, враховуючи циклічність
        tail = (tail + 1) % 100;
        // Присвоїти елементу хвоста значення num
        queue[tail] = num;
    }

    // Метод, який видаляє та повертає перший елемент черги
    int deq() {
        // Якщо черга порожня, вивести повідомлення та повернути -1
        if (head == tail) {
            cout << "Queue is empty\n";
            return -1;
        }
        // Інакше, збільшити вершину на одиницю, враховуючи циклічність
        head = (head + 1) % 100;
        // Повернути елемент вершини
        return queue[head];
    }

    // Метод, який виводить елементи черги в порядку додавання
    void display() {
        // Якщо черга порожня, вивести повідомлення
        if (head == tail) {
            cout << "Queue is empty\n";
            return;
        }
        // Інакше, створити змінну i, яка починається з вершини
        int i = (head + 1) % 100;
        // Поки i не дорівнює хвосту, виводити елементи черги
        while (i != tail) {
            cout << queue[i] << " ";
            // Збільшити i на одиницю, враховуючи циклічність
            i = (i + 1) % 100;
        }
        // Вивести останній елемент черги
        cout << queue[i] << "\n";
    }

};
int main() {
    // Створити об'єкт класу q_type
    q_type myQueue;
    // Додати деякі числа до черги
    myQueue.q(100);
    myQueue.q(99);
    myQueue.q(98);
    myQueue.q(97);
    myQueue.q(96);
    // Вивести елементи черги
    myQueue.display();
    // Видалити та повернути перший елемент черги
    cout << "Dequeue: " << myQueue.deq() << "\n";
    // Вивести елементи черги після видалення
    myQueue.display();
    for (int i = 95; i > 1; i--) {
        myQueue.q(i - 1);
    }
    myQueue.q(100);
    myQueue.display();
    return 0;
}