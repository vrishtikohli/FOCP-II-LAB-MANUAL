#include <iostream>
using namespace std;
int main() {
    const int n = 10;
    double salary[n];
    double total = 0, average;
    cout << "Enter salary of 10 employees:\n";
    for (int i = 0; i < n; i++) {
        cout << "Employee " << i + 1 << ": ";
        cin >> salary[i];
        total += salary[i];
    }
    average = total / n;
    cout << "\nTotal Salary of 10 employees: " << total << endl;
    cout << "Average Salary: " << average << endl;
    return 0;
}
