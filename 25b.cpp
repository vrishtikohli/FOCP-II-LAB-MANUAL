#include <iostream>
#include <string>
using namespace std;
bool isValidPassword(const string &password) {
    bool hasUpper = false;
    bool hasLower = false;
    bool hasDigit = false;
    bool hasSpecial = false;
    string specialChars = "@#$%!&*";
    for (char ch : password) {
        if (ch >= 'A' && ch <= 'Z') {
            hasUpper = true;
        }
        else if (ch >= 'a' && ch <= 'z') {
            hasLower = true;
        }
        else if (ch >= '0' && ch <= '9') {
            hasDigit = true;
        }
        else {
            for (char s : specialChars) {
                if (ch == s) {
                    hasSpecial = true;
                    break;
                }
            }
        }
    }
    return hasUpper && hasLower && hasDigit && hasSpecial;
}
int main() {
    string password;
    cout << "Enter password: ";
    cin >> password;
    if (isValidPassword(password)) {
        cout << "Password is valid (Strong Password)" << endl;
    } else {
        cout << "Password is invalid (Weak Password)" << endl;
    }
    return 0;
}
