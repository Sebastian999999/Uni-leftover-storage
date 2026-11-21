#include <iostream>
using namespace std;

int main() {
    int temperature;
    cout << "Enter the temperature: " << endl;
    cin >> temperature;

    		switch (temperature > 100 || temperature < -100) {
        case 1:
            cout << "Invalid Input" << endl;
            break;
    }

    		switch (temperature >= 40 && temperature <= 100) {
        case 1:
            cout << "Very hot" << endl;
            break;
    }

    		switch (temperature >= 30 && temperature < 40) {
        case 1:
            cout << "Hot" << endl;
            break;
    }

    		switch (temperature >= 20 && temperature < 30) {
        case 1:
            cout << "Normal" << endl;
            break;
    }

    		switch (temperature >= 10 && temperature < 20) {
        case 1:
            cout << "Cold" << endl;
            break;
    }

    		switch (temperature >= 0 && temperature < 10) {
        case 1:
            cout << "Very Cold" << endl;
            break;
    }

    		switch (temperature < 0 && temperature >= -100) {
        case 1:
            cout << "Freezing" << endl;
            break;
    }

    return 0;
}

