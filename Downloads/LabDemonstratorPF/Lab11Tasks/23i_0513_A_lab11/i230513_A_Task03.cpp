#include <iostream>
using namespace std;

// Function prototype
int divide(int a, int b = 2);

// Function definition
int divide(int a, int b) {
    return a / b;
}

int main() {
    int result1 = divide(10);  // Calling with 1 argument
    int result2 = divide(20, 4);  // Calling with 2 arguments

    cout << "Result 1: " << result1 << endl;
    cout << "Result 2: " << result2 << endl;

    return 0;
}

