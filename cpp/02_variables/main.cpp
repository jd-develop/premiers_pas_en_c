#include <iostream>
using namespace std;

int main() {
    int number = 15;
    double other_number = 1.2;
    char character = 'A';
    string multiple_characters = "Hello world!";
    bool thisIsTrue = true;
    cout << number << " is a number and " << other_number << " is also a number." << "\n";
    cout << number << '+' << other_number << " = " << number+other_number << "\n";
    cout << character << multiple_characters << "\n";  // AHello world!
    cout << thisIsTrue << " is true" << "\n";  // 1 is true

    cout << "\n";

    number = 16;
    other_number = 3.2;
    cout << number << '+' << other_number << " = " << number+other_number << "\n";

    cout << "\n";
    int a = 1, b = 2, c = 3;
    cout << a << "+" << b << "+" << c << " = " << a+b+c << "\n";

    cout << "\n";
    int d, e, f;
    d = e = f = 12;
    cout << "3×12 = " << d+e+f << "\n";

    const int g = 1;
    // the following line causes a compiler error:
    // g = 3;

    char thisIsAnA = 65;
    cout << thisIsAnA;

    ++thisIsAnA; // now a B
    cout << thisIsAnA;

    ++++thisIsAnA; // now a D
    cout << thisIsAnA;

    --thisIsAnA; // now a C
    cout << thisIsAnA;

    thisIsAnA += 5; // now an H
    cout << thisIsAnA;

    thisIsAnA -= 1; // now an F
    cout << thisIsAnA << "\n";

    return 0;
}
