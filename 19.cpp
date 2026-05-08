#include <iostream>
#include <cmath>
using namespace std;
bool isPrime(int n) {
    if (n <= 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0)
            return false;
    }
    return true;
}
int main() {
    int L, R;
    cout << "Enter range (L R): ";
    cin >> L >> R;
    cout << "Prime numbers between " << L << " and " << R << " are:\n";
    for (int i = L; i <= R; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
    return 0;
}
