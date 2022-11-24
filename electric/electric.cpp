#include <iostream>
#include <string>

using namespace std;

int main() {
    char userCode;
    int unit;
    string userType;
    float rate;
    int firstRate, secondRate;

    cout << "1. Household (R)\n2. Office (P)\nEnter user code: ";
    cin >> userCode;

    cout << "Enter your electrical consumption: ";
    cin >> unit;

    // change userCode variable to uppercase
    userCode = toupper(userCode);

    if (userCode == 'R') {
        userType = "Household";
        if (unit - 500 <= 0) {
            rate = 0.25 * unit;
        } else {
            firstRate = 500;
            secondRate = unit - 500;
            rate = (0.25 * firstRate) + (0.50 * secondRate);
        }
    } else if (userCode == 'P') {
        userType = "Office";
        if (unit - 1000 <= 0) {
            rate = 0.50 * unit;
        } else {
            firstRate = 1000;
            secondRate = unit - 1000;
            rate = (0.50 * firstRate) + (0.8 * secondRate);
        }
    } else {
        cout << "Invalid user code";
        rate = 0;
    }

    if (rate != 0) {
        cout << "User type: " << userType << endl;
        cout << "Unit consumed: " << unit << endl;
        cout << "Total bill: RM " << rate << endl;
    }

    return 0;
}