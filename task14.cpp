#include <iostream>
#include <ctime>

using namespace std;

class Stopwatch {
private:
    time_t start_time;
    time_t end_time;

public:
    Stopwatch() {
        start_time = time(NULL);
        end_time = start_time;
    }

    void start() {
        start_time = time(NULL);
    }

    void stop() {
        end_time = time(NULL);
    }

    void show() {
        cout << "Period of time: " << (end_time - start_time) << " seconds" << endl;
    }

    ~Stopwatch() {
        cout << "Ellapsed time: " << (time(NULL) - start_time) << " секунд" << endl;
    }
};

int main() {
    Stopwatch stopwatch;
    stopwatch.start();
    cout << "Press ENTER to stop the timer"<< endl;
    cin.get();
    stopwatch.stop();
    stopwatch.show();

    return 0;
}