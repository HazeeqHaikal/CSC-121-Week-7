#include <iostream>
#include <string>

using namespace std;

int main() {
    int program, yearStudy;
    float CGPA, amountPerYear, totalAmount;

    cout << "1. Social Science\n2. Science and Technology\nEnter program: ";
    cin >> program;

    cout << "Enter your CGPA: ";
    cin >> CGPA;

    cout << "Enter your year of study: ";
    cin >> yearStudy;

    switch (program) {
        case 1:
            if (CGPA > 4.0 || CGPA < 0) {
                cout << "Invalid CGPA";
            } else if (CGPA >= 3.3) {
                amountPerYear = 7000.0;
            } else if (CGPA < 3.3) {
                amountPerYear = 5000;
            } else {
                amountPerYear = 0;
            }
            break;
        case 2:
            if (CGPA > 4.0 || CGPA < 0) {
                cout << "Invalid CGPA";
            } else if (CGPA >= 3.0) {
                amountPerYear = 10000.0;
            } else if (CGPA < 3.0) {
                amountPerYear = 6000;
            } else {
                amountPerYear = 0;
            }
            break;
    }

    if (amountPerYear != 0) {
        totalAmount = amountPerYear * yearStudy;
        cout << "Total amount: RM " << totalAmount << endl;
    }

    return 0;
}