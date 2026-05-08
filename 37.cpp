#include <iostream>
using namespace std;
bool isValidUsername(string username) {
    for (char ch : username) 
        if (!((ch >= 'A' && ch <= 'Z') ||
              (ch >= 'a' && ch <= 'z') ||
              (ch >= '0' && ch <= '9'))) {
            return false;
        }
    }
    return true;
}
int main() {
    string username;
    cout << "Enter username: ";
    cin >> username;
    if (isValidUsername(username)) {
        cout << "Valid username (Accepted)\n";
    } else {
        cout << "Invalid username (Rejected)\n";
    }
    return 0;
}
