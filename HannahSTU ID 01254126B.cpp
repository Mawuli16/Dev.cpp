#include <iostream>

using namespace std;

int main() {
    // Step 2: Declare variables
    double voltage = 0.0;
    double current = 0.0;
    double power = 0.0;

    // Step 3 & 4: Get voltage input
    cout << "Enter the voltage (Volts): ";
    cin >> voltage;

    // Step 5 & 6: Get current input
    cout << "Enter the current (Amperes): ";
    cin >> current;

    // Step 7: Calculate power
    power = voltage * current;

    // Step 8: Display the result
    cout << "The calculated power is: " << power << " Watts" << endl;

    return 0;
}
