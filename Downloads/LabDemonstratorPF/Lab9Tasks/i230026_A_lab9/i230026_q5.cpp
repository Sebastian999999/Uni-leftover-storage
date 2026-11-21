#include <iostream>
#include <vector>
using namespace std;

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    vector<int> arr(size);

    cout << "Enter " << size << " integers: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    int sum = 0;
    for (int num : arr) {
        while (num >= 10) {
            num /= 10;
        }
        sum += num;
    }

    cout << "Input: [";
    for (int i = 0; i < arr.size(); ++i) {
        cout << arr[i];
        if (i < arr.size() - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;

    cout << "Output: " << sum << endl;

    return 0;
}

