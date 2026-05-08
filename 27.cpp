#include <iostream>
using namespace std;
int main() {
    float price[10];
    cout << "Enter prices of 10 items:\n";
    for (int i = 0; i < 10; i++) {
        cin >> price[i];
    }
    float maxPrice = price[0];
    for (int i = 1; i < 10; i++) {
        if (price[i] > maxPrice) {
            maxPrice = price[i];
        }
    }
    cout << "Maximum price = " << maxPrice << endl;
    return 0;
}
