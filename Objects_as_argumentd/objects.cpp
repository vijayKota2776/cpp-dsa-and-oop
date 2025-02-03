#include <iostream>
using namespace std;

class Time {  
private:
    int hours, minutes;

public:
    Time(int hrs, int mins) {
        hours = hrs;
        minutes = mins;
    }

    void sum(Time t1, Time t2);
    void display();
};

void Time::display() {
    cout << "\n(hours:minutes) given by " << hours << ":" << (minutes < 10 ? "0" : "") << minutes;
}

void Time::sum(Time t1, Time t2) {
    minutes = t1.minutes + t2.minutes;
    hours = minutes / 60;
    minutes %= 60;
    hours += t1.hours + t2.hours;
}

int main() {
    int hours1, minutes1, hours2, minutes2;

    cout << "For Time 1: " << endl;
    cout << "Enter hours: ";
    cin >> hours1;
    cout << "Enter minutes: ";
    cin >> minutes1;
    Time t1(hours1, minutes1);

    cout << "\nFor Time 2: " << endl;
    cout << "Enter hours: ";
    cin >> hours2;
    cout << "Enter minutes: ";
    cin >> minutes2;
    Time t2(hours2, minutes2);

    t1.display();
    t2.display();

    Time t3(0, 0);  // Fixed class name
    t3.sum(t1, t2);

    cout << "\n\nTotal time elapsed is: ";
    t3.display();

    return 0;
}