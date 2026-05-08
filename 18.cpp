#include <iostream>
using namespace std;
int main() {
    string id;
    cout << "Enter ID: ";
    cin >> id;
    int i = 0, j = id.length() - 1;
    bool isPalindrome = true;
    while (i < j) {
        if (id[i] != id[j]) {
            isPalindrome = false;
            break;
        }
        i++;
        j--;
    }
    if (isPalindrome)
        cout << "The ID is a Palindrome.";
    else
        cout << "The ID is NOT a Palindrome.";
    return 0;
}
