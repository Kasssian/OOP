#include <iostream>

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 5, y = 10;
    std::cout << "�� swap: x=" << x << ", y=" << y << "\n";
    swap(x, y);
    std::cout << "����� swap: x=" << x << ", y=" << y << "\n";
    return 0;
}
