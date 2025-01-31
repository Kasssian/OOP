#include <iostream>
using namespace std;

struct Date {
	int day;
	int month;
	int year;
};

int main() {
	Date date;

	cout << "Enter day: " << endl;
	cin >> date.day;
	if (date.day < 1 or date.day > 31) {

	}

	cout << "Enter month: " << endl;
	cin >> date.month;

	cout << "Enter year: " << endl;
	cin >> date.year;

	cout << "Date is: " << date.day << "/" << date.month << "/" << date.year << endl;
}