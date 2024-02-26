#include <iostream>
#include <iomanip>
using namespace std;

bool validInput(const string &input); 

int main () {
    int time[3];  
    float workerwage[3];
    float totalwage = 0;
    
    for (int i = 0; i < 3; i++) {
        string input;

        while (true) {
            cout << "Enter the worked time of worker " << i + 1 << ": ";
            cin >> input;
            
            if (!validInput(input) || stof(input) < 0) {
                cout << "Invalid input. Please enter a non-negative number with at most two decimal places."<< endl;
            } else {
                time[i] = stof(input);
                break;
            }
        }
    }

    for (int i = 0; i < 3; i++) {
        string input;
        
        while (true) {
            cout << "Enter the hourly wage of worker " << i + 1 << ": ";
            cin >> input;
            
            if (!validInput(input) || stof(input) < 0) {
                cout << "Invalid input. Please enter a non-negative number with at most two decimal places." << endl;
            } else {
                workerwage[i] = stof(input); //stof перетворює input на float
                break;
            }
        }
    }

    for (int i = 0; i < 3; i++) {
        totalwage += time[i] * workerwage[i];
    }

    cout << fixed << setprecision(2); // вивід числа з фіксованим форматом - 2 знаки після коми
    cout << "The summary wage of the personnel is: $" << totalwage;

    return 0;
}

bool validInput(const string &input) { //перевірка чи не надано input в буквенному форматі та чи не містить він більше 2 знаків після коми 
    bool isValid = true;
    for (char c : input) { //перебирається кожен символ
        if (!isdigit(c) && c != '.') {
            isValid = false;
            break;
        }
    }
    return isValid;
}