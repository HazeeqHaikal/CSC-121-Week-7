#include <iostream>
#include <string>

#define TAX 1.2

using namespace std;

int main() {
    int type, package;
    float price;

    cout << "1. Compact\n2. Sedan\nEnter your choice: ";
    cin >> type;

    switch (type) {
        case 1:
            cout << "1. Standard\n2. Limited Edition\nEnter your choice: ";
            cin >> package;
            if (package == 1) {
                price = 24000;
            } else if (package == 2) {
                price = 28000;
            } else {
                cout << "Invalid package";
            }
            break;
        case 2:
            cout << "1. Standard\n2. Sporty\n3. Limited Edition\nEnter your choice: ";
            cin >> package;
            if (package == 1) {
                price = 35000;
            } else if (package == 2) {
                price = 37000;
            } else if (package == 3) {
                price = 41000;
            } else {
                cout << "Invalid package";
            }
            break;
        default:
            cout << "Invalid type";
    }

    if (price != 0) {
        cout << "Total price: RM " << price * TAX << endl;
    }

    return 0;
}