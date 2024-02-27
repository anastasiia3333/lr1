#include <iostream>
#include <ctime>
using namespace std;

class time_and_date {
    time_t current_time;
    struct tm *local_time; // структура для зберігання дати та часу в локальному часовому поясі

public:
    time_and_date() {
        time(&current_time);
        local_time = localtime(&current_time);
    }

    void show() {
        cout << "Current time and date: " << asctime(local_time) << endl;
    }
};

int main() {
    time_and_date ob;
    ob.show();
    return 0;
}
