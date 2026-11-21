
#include<iostream>
using namespace std;
int main() {

    int arr[5];
    int i;

    cout << "Enter 5 integers: ";
    for (i = 0; i < 5; i++) {
        cin >> arr[i];
        arr[i] = arr[i] * arr[i];
    }

    int reverse_Arr[5];
    for (i = 4; i >= 0; i--) {
        reverse_Arr[4 - i] = arr[i];
    }

    cout << "Updated array is:  {";
    for (i = 0; i < 5; i++) {
        if (i != 0) {
            cout << ", ";
        }
        cout << arr[i];
    }
    cout << "}" << endl;

    cout << "Reversed array is:  {";
    for (i = 0; i < 5; i++) {
        if (i != 0) {
            cout << ", ";
        }
        cout << reverse_Arr[i];
    }
    cout << "}" << endl;

    return 0;
}

