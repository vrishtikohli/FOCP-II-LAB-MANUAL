#include <iostream>
using namespace std;
int main() {
    int p1, p2, p3;
    cout << "Enter score of Player 1: ";
    cin >> p1;
    cout << "Enter score of Player 2: ";
    cin >> p2;
    cout << "Enter score of Player 3: ";
    cin >> p3;
    if (p1 > p2 && p1 > p3) {
        cout << "Player 1 is the winner!" << endl;
    }
    else if (p2 > p1 && p2 > p3) {
        cout << "Player 2 is the winner!" << endl;
    }
    else if (p3 > p1 && p3 > p2) {
        cout << "Player 3 is the winner!" << endl;
    }
    else {
        cout << "It's a tie!" << endl;
    }
    return 0;
}
