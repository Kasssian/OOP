#include <iostream>

struct Sterling {
    int pounds;
    int shillings;
    int pence;
};

Sterling get_sterling() {
    Sterling s;
    std::cout << "¬ведите фунты, шиллинги, пенсы: ";
    std::cin >> s.pounds >> s.shillings >> s.pence;
    return s;
}

Sterling add_sterling(Sterling s1, Sterling s2) {
    Sterling sum;
    sum.pence = s1.pence + s2.pence;
    sum.shillings = s1.shillings + s2.shillings + sum.pence / 12;
    sum.pounds = s1.pounds + s2.pounds + sum.shillings / 20;
    sum.pence %= 12;
    sum.shillings %= 20;
    return sum;
}

void print_sterling(Sterling s) {
    std::cout << "—умма: " << s.pounds << " фунтов, " << s.shillings << " шиллингов, " << s.pence << " пенсов\n";
}

int main() {
    Sterling s1 = get_sterling();
    Sterling s2 = get_sterling();
    Sterling result = add_sterling(s1, s2);
    print_sterling(result);
    return 0;
}
