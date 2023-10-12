#include <iostream>
using namespace std;

class Time {
    int hours;
    int minutes;

public:
    void gettime(int &h, int &m) {
        hours = h;
        minutes = m;
    }

    void printtime() {
        cout << hours << " Hours " << minutes << " Minutes" << endl;
    }

    void sum(const Time &t1, const Time &t2) {
        minutes = t1.minutes + t2.minutes;
        hours = minutes / 60;
        minutes = minutes % 60;
        hours = hours + t2.hours + t1.hours;
    }
};

int main() {
    Time t1, t2, t3;

    int h1 = 2, m1 = 45;
    int h2 = 3, m2 = 30;

    t1.gettime(h1, m1);
    t2.gettime(h2, m2);

    t3.sum(t1, t2); // Pass t1 and t2 by reference

    cout << "t1: ";
    t1.printtime();

    cout << "t2: ";
    t2.printtime();

    cout << "t3: ";
    t3.printtime();

    return 0;
}
