#include <iostream>

void count_calls_static() {
    static int count = 0;
    std::cout << "������� ������� " << ++count << " ���(�)\n";
}

int main() {
    for (int i = 0; i < 10; i++)
        count_calls_static();
    return 0;
}
