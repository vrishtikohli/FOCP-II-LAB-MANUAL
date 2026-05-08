#include <iostream>
using namespace std;
int main() {
    int quantity;
    float unitPrice, total, discount, finalAmount;
    cout << "Enter quantity: ";
    cin >> quantity;
    cout << "Enter unit price: ";
    cin >> unitPrice;
    total = quantity * unitPrice;
    if (quantity > 1000) {
        discount = 0.10 * total;
    } else {
        discount = 0;
    }
    finalAmount = total - discount;
    cout << "Total amount: " << total << endl;
    cout << "Discount: " << discount << endl;
    cout << "Final payable amount: " << finalAmount << endl;
    return 0;
}
