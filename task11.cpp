#include <iostream>
#include <thread>
#include <string>
using namespace std;

void sleep(int seconds);
void sleep(string seconds);

int main() {
    sleep(10);
    sleep("10");
    return 0;
}
void sleep(int seconds) {
    cout << "Sleep for " << seconds << " seconds" << endl;
    // Створюємо об'єкт типу chrono::seconds зі значенням seconds
    chrono::seconds duration(seconds);
    this_thread::sleep_for(duration);
    cout << "Wake up!" << endl;
}
void sleep(string seconds) {
    cout << "Sleep for " << seconds << " seconds" << endl;
    // Перетворюємо рядок на ціле число за допомогою функції stoi
    int s = stoi(seconds);
    // Створюємо об'єкт типу chrono::seconds зі значенням s
    chrono::seconds duration(s);
    // Припиняємо роботу поточного потоку на duration
    this_thread::sleep_for(duration);
    cout << "Wake up!" << endl;
}
