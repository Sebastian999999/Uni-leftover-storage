#include <iostream>
using namespace std;

int main() {
    int arr[] = {321, 2345, 4, 876, 54};
    int sum = 0;

    
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i) {
        int num = arr[i];
        
        int msd = num;
        while (msd >= 10) {
            msd /= 10;
        }
         sum += msd;
    }

    
    cout << "Sum of most significant digits: " << sum << endl;

    return 0;
}

