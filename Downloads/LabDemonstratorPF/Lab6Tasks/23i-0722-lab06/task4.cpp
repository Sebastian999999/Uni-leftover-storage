#include<iostream>
using namespace std;

int main() {
    int temp;
    cout << "Enter the temperature in centigrade (C): ";
    cin >> temp;

    switch (temp) {
        case -999 ... -1:
            cout << "Freezing\n";
            break;
        case 0 ... 9:
            cout << "Very cold\n";
            break;
        case 10 ... 19:
            cout << "Cold\n";
            break;
        case 20 ... 29:
            cout << "Normal\n";
            break;
        case 30 ... 39:
            cout << "Hot\n";
            break;
        case 40 ... 999:
            cout << "Very hot\n";
            break;
        default:
            cout << "Invalid temperature\n";
            break;
    }

    return 0;
}

