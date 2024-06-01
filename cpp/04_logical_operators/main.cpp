#include <iostream>
using namespace std;

int main() {
    // 0001
    cout << (false && false);
    cout << (false && true);
    cout << (true && false);
    cout << (true && true) << "\n";

    // 0111
    cout << (false || false);
    cout << (false || true);
    cout << (true || false);
    cout << (true || true) << "\n";

    // 01
    cout << (!true) << (!false) << "\n";

    return 0;
}
