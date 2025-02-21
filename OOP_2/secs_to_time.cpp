#include <iostream>
#include <iomanip>
using namespace std;

struct Time {
    int hours;
    int minutes;
    int seconds;
};

long time_to_secs(const Time& t) {
    return t.hours * 3600 + t.minutes * 60 + t.seconds;
}

Time secs_to_time(long total_seconds) {
    Time result;
    result.hours = total_seconds / 3600;
    total_seconds %= 3600;              
    result.minutes = total_seconds / 60;
    result.seconds = total_seconds % 60;
    return result;
}

int main() {
    Time t1, t2, result_time;
    long total_seconds;

    cout << "Enter first time (hours minutes seconds): ";
    cin >> t1.hours >> t1.minutes >> t1.seconds;

    cout << "Enter second time (hours minutes seconds): ";
    cin >> t2.hours >> t2.minutes >> t2.seconds;

    long total_seconds_t1 = time_to_secs(t1);
    long total_seconds_t2 = time_to_secs(t2);

    total_seconds = total_seconds_t1 + total_seconds_t2;

    result_time = secs_to_time(total_seconds);

    cout << "Sum of times: "
        << setw(2) << setfill('0') << result_time.hours << ":"
        << setw(2) << setfill('0') << result_time.minutes << ":"
        << setw(2) << setfill('0') << result_time.seconds << endl;

    return 0;
}
