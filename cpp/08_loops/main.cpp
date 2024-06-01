#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 5; i++) {
        cout << i << "\n";
    }

    // foreach
    int numbers[5] = {10, 40, 3, 2, 89};
    for (int i: numbers) {
        cout << i << "\n";
    }

    return 0;
}
