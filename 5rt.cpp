#include <iostream>
using namespace std;

int main() {
    float batteryVoltage;

    cout << "Enter battery voltage: ";
    cin >> batteryVoltage;

    if (batteryVoltage < 9.6) {
        cout << "WARNING: Battery Low" << endl;
    } else {
        cout << "Battery Normal" << endl;
    }

    return 0;
}