#include <iostream>
using namespace std;

int main() {
    float temp;
    char unit;
    cout << "Enter temperature value followed by unit (C/F): ";
    cin >> temp >> unit;

    if (unit == 'C' || unit == 'c')
        cout << "In Fahrenheit: " << (temp * 9/5) + 32;
    else if (unit == 'F' || unit == 'f')
        cout << "In Celsius: " << (temp - 32) * 5/9;
    else
        cout << "Invalid unit!";
    return 0;
}