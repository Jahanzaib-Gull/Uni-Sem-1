#include <iostream>
using namespace std;

void Price();

main() {
    char continueInput = 'y';

    while (continueInput == 'y') {
        Price();
        cout << "Continue? (y/n): ";
        cin >> continueInput;
    }
}

void Price() {
    float price;

    cout << "Enter the total price: ";
    cin >> price;

    if (price == 500.0) {
        float discount = 0.05 * price;
        float finalPrice = price - discount;
        cout << "Price after Discount: "<< finalPrice <<"$"<< endl;
    } else {
        cout << "Price after Discount: " << price <<"$"<< endl;
    }
}