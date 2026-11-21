#include <iostream>

using namespace std;

int main() {
    float temperature;

    cout << "Enter the temperature in Celsius: ";
    cin >> temperature;

    // Check for invalid input
    if (cin.fail()) {
        cout << "Invalid input! Please enter a valid temperature." << endl;
        return 0;
    }

    // Check temperature range using switch statement
    switch(static_cast<int>(temperature)) {
        case -100 ... 0:
            cout << "It's freezing cold!" << endl;
            break;
        case 1 ... 10:
            cout << "It's very cold." << endl;
            break;
        case 11 ... 20:
            cout << "It's cold." << endl;
            break;
        case 21 ... 30:
            cout << "It's moderate." << endl;
            break;
        case 31 ... 40:
            cout << "It's hot." << endl;
            break;
        case 41 ... 100:
            cout << "It's very hot!" << endl;
            break;
        default:
            cout << "The entered temperature is not within the expected range." << endl;
    }

    return 0;
}

