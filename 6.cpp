#include <iostream>
using namespace std;
int main() {
    int n; 
    cout << "Enter number of employees: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        float basicSalary, bonus, netSalary;
        cout << "\nEnter basic salary of employee " << i << ": ";
        cin >> basicSalary;
        bonus = 0.12 * basicSalary;
        netSalary = basicSalary + bonus;
        cout << "Bonus: " << bonus << endl;
        cout << "Net Salary: " << netSalary << endl;
    }
    return 0;
}
