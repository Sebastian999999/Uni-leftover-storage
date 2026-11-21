#include <iostream>
using namespace std;

int tripleCallByValue(int);

void tripleByReference(int&);

int main() {
    int count = 5;

         cout << "Before tripleCallByValue: count = " << count << endl;
    count = tripleCallByValue(count);
         cout << "After tripleCallByValue: count = " << count << endl;

    count = 5; // Reset count to its original value

    	cout << "\nBefore tripleByReference: count = " << count << endl;
    tripleByReference(count);
    	cout << "After tripleByReference: count = " << count <<   endl;

    return 0;
}

// Function for tripleCallByValue
int tripleCallByValue(int num) {
    return num * 3;
}

// Function for tripleByReference
void tripleByReference(int& num) {
    num *= 3;
}

