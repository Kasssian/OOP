#include <iostream>
using namespace std;

// Function declarations
double power(double n, int p = 2); // Raise a number to a power (default is 2)
char power(char name);            // Greet the user by name
int power(int age);               // Check the user's age
long power(long salary);          // Check the user's salary
float power(float n);             // Square a floating-point number


int main() {
    int choice;
    double number, answer;
    int pow;
    char yeserno;
    char name;
    int age;
    long salary;
    float float_number;

    // Menu
    cout << "=== Menu ===" << endl;
    cout << "1. Raise a number to a power" << endl;
    cout << "2. Greet by name" << endl;
    cout << "3. Check age" << endl;
    cout << "4. Check salary" << endl;
    cout << "5. Square a floating-point number" << endl;
    cout << "Choose an option (1-5): ";
    cin >> choice;

    switch (choice) {
    case 1: // Raise a number to a power
        cout << "\nEnter a number: ";
        cin >> number;
        cout << "Do you want to enter a power? (y/n): ";
        cin >> yeserno;
        if (yeserno == 'y') {
            cout << "Enter the power: ";
            cin >> pow;
            answer = power(number, pow);
        }
        else {
            answer = power(number); // Default power is 2
        }
        cout << "Result: " << answer << endl;
        break;

    case 2: // Greet by name
        cout << "\nEnter your name (one character): ";
        cin >> name;
        power(name);
        break;

    case 3: // Check age
        cout << "\nEnter your age: ";
        cin >> age;
        power(age);
        break;

    case 4: // Check salary
        cout << "\nEnter your salary: ";
        cin >> salary;
        power(salary);
        break;

    case 5: // Square a floating-point number
        cout << "\nEnter a floating-point number: ";
        cin >> float_number;
        cout << "Square of the number: " << power(float_number) << endl;
        break;

    default:
        cout << "Invalid choice!" << endl;
        break;
    }

    return 0;
}

// Function definitions
double power(double n, int p) {
    double result = 1.0; // Start with 1
    for (int j = 0; j < p; j++) { // Multiply by n, p times
        result *= n;
    }
    return result;
}

char power(char name) {
    cout << name << ", cool name!" << endl; // Greet the user
    return name;
}

int power(int age) {
    if (age < 18) {
        cout << "You are young and full of energy!" << endl; // Young user
    }
    else {
        cout << "You are not so young anymore :-(." << endl; // Older user
    }
    return age;
}

long power(long salary) {
    if (salary > 100000) {
        cout << "You have a big salary: " << salary << endl; // High salary
    }
    else {
        cout << "Your salary is modest: " << salary << endl; // Modest salary
    }
    return salary;
}

float power(float n) {
    return n * n; // Square the floating-point number
}