#include <iostream>

int main() {
    // Declare variables for the three resistances and the average
    double resistance1 = 0.0;
    double resistance2 = 0.0;
    double resistance3 = 0.0;
    double averageResistance = 0.0;

    // Step 1: Input
    std::cout << "Enter the first resistance value (in Ohms): ";
    std::cin >> resistance1;

    std::cout << "Enter the second resistance value (in Ohms): ";
    std::cin >> resistance2;

    std::cout << "Enter the third resistance value (in Ohms): ";
    std::cin >> resistance3;

    // Step 2: Process
    averageResistance = (resistance1 + resistance2 + resistance3) / 3.0;

    // Step 3: Output
    std::cout << "\nThe average resistance is: " << averageResistance << " Ohms" << std::endl;

    return 0;
}