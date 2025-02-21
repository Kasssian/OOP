#include <iostream>

struct Fraction {
    int num;
    int den;
};

Fraction fadd(Fraction a, Fraction b) {
    return { a.num * b.den + b.num * a.den, a.den * b.den };
}

Fraction fsub(Fraction a, Fraction b) {
    return { a.num * b.den - b.num * a.den, a.den * b.den };
}

Fraction fmul(Fraction a, Fraction b) {
    return { a.num * b.num, a.den * b.den };
}

Fraction fdiv(Fraction a, Fraction b) {
    return { a.num * b.den, a.den * b.num };
}

void print_fraction(Fraction f) {
    std::cout << f.num << "/" << f.den << "\n";
}

int main() {
    Fraction f1 = { 1, 2 }, f2 = { 3, 4 };
    print_fraction(fadd(f1, f2));
    print_fraction(fsub(f1, f2));
    print_fraction(fmul(f1, f2));
    print_fraction(fdiv(f1, f2));
    return 0;
}
