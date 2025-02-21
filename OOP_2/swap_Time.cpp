#include <iostream>

struct Time {
    int hours;
    int minutes;
    int seconds;
};

void swap(Time& t1, Time& t2) {
    Time temp = t1;
    t1 = t2;
    t2 = temp;
}

int main() {
    Time t1 = { 1, 30, 45 }, t2 = { 2, 45, 15 };
    std::cout << "До swap: " << t1.hours << ":" << t1.minutes << ":" << t1.seconds
        << " и " << t2.hours << ":" << t2.minutes << ":" << t2.seconds << "\n";
    swap(t1, t2);
    std::cout << "После swap: " << t1.hours << ":" << t1.minutes << ":" << t1.seconds
        << " и " << t2.hours << ":" << t2.minutes << ":" << t2.seconds << "\n";
    return 0;
}
