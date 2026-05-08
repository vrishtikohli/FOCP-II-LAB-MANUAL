#include <iostream>
using namespace std;
int main() {
    float radius, area;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    area = 3.14 * radius * radius;
    cout << "Area of the circle = " << area;
    return 0;
}
