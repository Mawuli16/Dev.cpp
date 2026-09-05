#include <iostream>

using namespace std;

int main() {
    // Declare variables
    double temperature;
    const double threshold = 30.0; // Threshold boundary for classification

    // Get user input
    cout << "Enter the temperature in Celsius: ";
    cin >> temperature;

    // Classify and display output
    if (temperature >= threshold) {
        cout << "The temperature is Hot." << endl;
    } else {
        cout << "The temperature is Cold." << endl;
    }

    return 0;
}