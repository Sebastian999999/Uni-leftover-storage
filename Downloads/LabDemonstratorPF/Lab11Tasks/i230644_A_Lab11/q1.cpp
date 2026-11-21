#include <iostream>
using namespace std;

int tripleCallByValue(int);

void tripleByReference(int&);

int main() {
    int cnt = 5;

cout << "Before tripleCallByValue: " << cnt <<endl;
   int y=  tripleCallByValue(cnt);
cout << "After tripleCallByValue: " << y <<endl;

cout << "Before tripleByReference: " << cnt <<endl;
    tripleByReference(cnt);
cout << "After tripleByReference: " << cnt <<endl;

    return 0;
}

int tripleCallByValue(int num) {
    return num * 3;
}

void tripleByReference(int &num) {
    num *= 3;
}

