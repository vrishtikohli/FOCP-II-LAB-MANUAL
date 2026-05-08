#include <iostream>
using namespace std;
bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}
int main() {
    int L, R;
    cout << "Enter lower limit: ";
    cin >> L;
    cout << "Enter upper limit: ";
    cin >> R;
    cout << "Prime numbers between " << L << " and " << R << " are:\n";
    for (int i = L; i <= R; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
    return 0;
}
