#include<iostream>
using namespace std;
int main() {

    char name[5] = {'I','m','a','a','d'};
    int count_a = 0;
    for (int i = 0; i <5; i++) {
        if (name[i] == 'a' || name[i] == 'A') {
            count_a++;
        }
    }

    cout << "The number of 'a's in the name " << name << " is " << count_a << "." << endl;

    return 0;
}

