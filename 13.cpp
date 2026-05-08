#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double a, b, c;
    cout << "Enter coefficients a, b, c: ";
    cin >> a >> b >> c;
    if (a == 0) {
        cout << "Not a quadratic equation." << endl;
        return 0;
    }
    double D = b * b - 4 * a * c;
    if (D > 0) {
        double r1 = (-b + sqrt(D)) / (2 * a);
        double r2 = (-b - sqrt(D)) / (2 * a);
        cout << "Two real roots: " << r1 << " and " << r2 << endl;
    }
    else if (D == 0) {
        double r = -b / (2 * a);
        cout << "One real root: " << r << endl;
    }
    else {
        double realPart = -b / (2 * a);
        double imagPart = sqrt(-D) / (2 * a);
        cout << "Complex roots: "
             << realPart << " + " << imagPart << "i and "
             << realPart << " - " << imagPart << "i" << endl;
    }
    return 0;
}
