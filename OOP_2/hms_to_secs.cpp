#include <iostream>
#include <string>
using namespace std;

int time(int seconds, int minutes, int hours) {
    int all_seconds = (minutes * 60) + (hours * 60 * 60) + seconds;
    return all_seconds;
}

int main() {
    int seconds, minutes, hours;
    string escape;

    do {
        cout << "Enter seconds: " << endl;
        cin >> seconds;
        cout << "Enter minutes: " << endl;
        cin >> minutes;
        cout << "Enter hours: " << endl;
        cin >> hours;

        cout << hours << ":"
            << (minutes < 10 ? "0" : "") << minutes << ":"
            << (seconds < 10 ? "0" : "") << seconds << endl;

        int all_seconds = time(seconds, minutes, hours);
        cout << "Total seconds: " << all_seconds << endl;

        cout << "Do you want to exit? (Yes/yes): " << endl;
        cin >> escape;

    } while (escape != "Yes" && escape != "yes");

    return 0;
}