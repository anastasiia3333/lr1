#include <iostream>
#include <cstring>
using namespace std;

// Функція, яка змінює порядок символів рядка на зворотний
void rev_str(char* str) {
    // Знаходимо довжину рядка
    int len = strlen(str);
    // Обмінюємо символи з початку і кінця рядка
    for (int i = 0; i < len / 2; i++) {
        swap(str[i], str[len - i - 1]);
    }
}

// Перевантажена функція, яка змінює порядок символів першого рядка і зберігає його в другому
void rev_str(char* str1, char* str2) {
    // Копіюємо перший рядок в другий
    strcpy(str2, str1);
    // Змінюємо порядок символів другого рядка на зворотний
    rev_str(str2);
}

int main() {
    // Створюємо два символьних масиви
    char s1[80], s2[80];
    // Копіюємо рядок "hello" в перший масив
    strcpy(s1, "programming");
    // Викликаємо перевантажену функцію з двома аргументами
    rev_str(s1, s2);
    // Виводимо результат
    cout << "First line : " << s1 << endl;
    cout << "Second line : " << s2 << endl;
    // Викликаємо перевантажену функцію з одним аргументом
    rev_str(s1);
    // Виводимо результат
    cout << "First line : " << s1 << endl;
    return 0;
}