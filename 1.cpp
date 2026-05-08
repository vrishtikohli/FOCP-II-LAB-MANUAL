#include <iostream>
using namespace std;
int main() {
    float marks1, marks2, marks3, average;
    cout << "Enter marks of three students: ";
    cin >> marks1 >> marks2 >> marks3;
    average = (marks1 + marks2 + marks3) / 3;
    cout << "Average marks = " << average;
    return 0;
}
