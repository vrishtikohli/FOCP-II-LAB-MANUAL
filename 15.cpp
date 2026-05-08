#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter number of sales entries: ";
    cin >> n;
    if (n <= 0) {
        cout << "Invalid number of entries!" << endl;
        return 0;
    }
    double sales, maxSales;
    cout << "Enter sales figures:\n";
    cin >> maxSales; 
    for (int i = 2; i <= n; i++) {
        cin >> sales;
        if (sales > maxSales) {
            maxSales = sales;
        }
    }
    cout << "Maximum sales figure = " << maxSales << endl;
    return 0;
}
