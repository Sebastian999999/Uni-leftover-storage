#include <iostream>

using namespace std;

int main() {
    float temperature;

  
    cout << "Enter temperature in Celsius: ";
    cin >> temperature;

    int temp_int = static_cast<int>(temperature / 10); 
    switch(temp_int) {
        case 4:
            cout << "Very Hot\n";
            break;
        case 3:
            if (temperature >= 30)
                cout << "Hot\n";
            else
                cout << "Normal\n";
            break;
        case 2:
            cout << "Normal\n";
            break;
        case 1:
            cout << "Cold\n";
            break;
        case 0:
            cout << "Very Cold\n";
            break;
        case -1:
            cout << "Freezing\n";
            break;
        default:
            cout << "Invalid input\n";
    }

    return 0;
}

