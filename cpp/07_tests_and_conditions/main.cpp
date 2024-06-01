#include <iostream>
using namespace std;

int main() {
    int age;
    const int votingAge = 18;

    cout << "Enter your age: ";
    cin >> age;

    if (age >= votingAge) {
        cout << "You can vote!\n";
    } else if (age == 17) {
        cout << "You’ll vote next year.\n";
    } else {
        cout << "Too young\n";
    }
    cout << ((age >= votingAge)? "You definitely can vote" : "You definitely can’t vote") << "\n";

    int dayOfWeek;
    cout << "Enter the day of week (1 for Monday to 7 for Sunday)";
    cin >> dayOfWeek;

    switch (dayOfWeek) {
        case 6:
            cout << "Yay! Saturday!\n";
            break;
        case 7:
            cout << "Yay! Sunday!\n";
            break;
        default:
            cout << "Not the weekend…\n";
    }

    return 0;
}
