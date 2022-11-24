#include <iostream>
#include <string>

using namespace std;

int main() {
    int first, second;
    cout << "Enter first number: ";
    cin >> first;

    cout << "Enter second number: ";
    cin >> second;

    if (first > 0) {
        if (second > 0) {
            cout << "PPP";
        } else {
            cout << "QQQ";
        }
    } else {
        if (second > 0) {
            cout << "RRR";
        } else {
            cout << "SSS";
        }
    }

    return 0;
}