#include <iostream>
using namespace std;
int main() {
    float celsius, fahrenheit;
    int choice;
    cout << "Temperature Conversion\n";
    cout << "1. Fahrenheit to Celsius\n";
    cout << "2. Celsius to Fahrenheit\n";
    cout << "Enter your choice: ";
    cin >> choice;
    if(choice == 1) {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> fahrenheit;
        celsius = (5.0 / 9.0) * (fahrenheit - 32);
        cout << "Temperature in Celsius = " << celsius << " °C";
    }
    else if(choice == 2) {
        cout << "Enter temperature in Celsius: ";
        cin >> celsius;
        fahrenheit = (9.0 / 5.0) * celsius + 32;
        cout << "Temperature in Fahrenheit = " << fahrenheit << " °F";
    }
    else {
        cout << "Invalid Choice!";
    }
    return 0;
}
