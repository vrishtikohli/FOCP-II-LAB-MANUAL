#include <iostream>
using namespace std;
int main() {
    int arr[5];
    cout << "Enter 5 stock values: ";
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
    int largest = arr[0];
    int secondLargest = -1;
    for (int i = 1; i < 5; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }
    cout << "Largest value: " << largest << endl;
    cout << "Second largest value: " << secondLargest << endl;
    return 0;
}
