#include <iostream>
using namespace std;

int len(string str) {
    // return the length of `str`.
    return str.length();
}

int main () {
    string a = "Hello, ";
    string b = "world!";
    a.append(b);
    cout << a << "\n";

    cout << "Length of a is: " << a.length() << "\n";
    cout << "Length of b is: " << len(b) << "\n";
    cout << "Length of a is: " << len(b) + len("Hello, ") << "\n";

    cout << "\n";
    cout << "The first  character of a is: " << a[0] << "\n";
    cout << "The second character of a is: " << a[1] << "\n";
    cout << "The third  character of a is: " << a.at(2) << "\n";
    cout << "The fourth character of a is: " << a[3] << "\n";
    cout << "The fifth  character of a is: " << a[4] << "\n";
    cout << "The last   character of a is: " << a[len(a)-1] << "\n";

    cout << "\n";
    a[0] = '(';
    a.at(1) = ')';
    cout << a << "\n";

    // the following code mess things up, which is why we use getline
    /* cout << "\n";
    string name;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Your name is " << name << "\n"; */

    string fullName;
    cout << "Enter your name: ";
    getline(cin, fullName);
    cout << "Your full name is " << fullName << "\n";

    return 0;
}
