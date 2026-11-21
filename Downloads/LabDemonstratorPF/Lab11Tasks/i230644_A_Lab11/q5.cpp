#include <iostream>
using namespace std;

bool isPerfect(int num) {
    int sum = 0;
    for (int i = 1; i <= num / 2; ++i) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return sum == num;
}

int main() {
    cout << "Perfect numbers between 1 and 1000 are:" << endl;

    for (int num = 1; num <= 1000; ++num) {
        if (isPerfect(num)) {
            cout << num << endl;
        }
    }

    return 0;
}

