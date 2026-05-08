#include <iostream>
using namespace std;
int main() {
    int marks[5];
    int total = 0;
    float percentage;
    cout << "Enter marks of 5 subjects:\n";
    for (int i = 0; i < 5; i++) {
        cout << "Subject " << i + 1 << ": ";
        cin >> marks[i];
        total += marks[i];
    }
    percentage = (total / 500.0) * 100;
    cout << "\n----- Result -----\n";
    cout << "Total Marks = " << total << " / 500" << endl;
    cout << "Percentage  = " << percentage << "%" << endl;
    return 0;
}
