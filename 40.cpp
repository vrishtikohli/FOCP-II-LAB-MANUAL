#include <iostream>
#include <string>
using namespace std;
char toUpper(char c) {
    if (c >= 'a' && c <= 'z')
        return c - 32;
    return c;
}
char toLower(char c) {
    if (c >= 'A' && c <= 'Z')
        return c + 32;
    return c;
}
bool isAlpha(char c) {
    return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
}
bool isDigit(char c) {
    return (c >= '0' && c <= '9');
}
int main() {
    string str;
    cout << "Enter input string: ";
    getline(cin, str);
    string cleaned = "";
    int n = str.length();
    int i = 0;
    while (i < n && str[i] == ' ') i++;
    bool spaceFound = false;
    for (; i < n; i++) {
        if (str[i] != ' ') {
            cleaned += str[i];
            spaceFound = false;
        } else {
            if (!spaceFound) {
                cleaned += ' ';
                spaceFound = true;
            }
        }
    }
    if (!cleaned.empty() && cleaned.back() == ' ')
        cleaned.pop_back();
    bool firstChar = true;
    for (int j = 0; j < cleaned.length(); j++) {
        if (firstChar && isAlpha(cleaned[j])) {
            cleaned[j] = toUpper(cleaned[j]);
            firstChar = false;
        } else {
            cleaned[j] = toLower(cleaned[j]);
            if (cleaned[j] != ' ')
                firstChar = false;
        }
    }
    int words = 0, digits = 0, special = 0;
    bool inWord = false;
    for (char c : cleaned) {
        if (isDigit(c)) {
            digits++;
        } else if (isAlpha(c)) {
        } else if (c != ' ') {
            special++;
        }
        if (c != ' ' && !inWord) {
            words++;
            inWord = true;
        }
        if (c == ' ')
            inWord = false;
    }
    bool valid = true;
    for (char c : cleaned) {
        if (!isAlpha(c) && !isDigit(c) && c != ' ') {
            valid = false;
            break;
        }
    }
    cout << "\nNormalized String: " << cleaned << endl;
    cout << "Total Words: " << words << endl;
    cout << "Total Digits: " << digits << endl;
    cout << "Total Special Characters: " << special << endl;
    if (valid)
        cout << "Validation: VALID string" << endl;
    else
        cout << "Validation: INVALID string (contains special characters)" << endl;
    return 0;
}
          
