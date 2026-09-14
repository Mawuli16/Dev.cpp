#include <iostream>
using namespace std;

int main()
{
    float temperature;

    // Input temperature
    cout << "Enter temperature in Celsius: ";
    cin >> temperature;

    // Check temperature
    if (temperature > 30)
    {
        cout << "Fan is ON";
    }
    else
    {
        cout << "Fan is OFF";
    }

    return 0;
}
