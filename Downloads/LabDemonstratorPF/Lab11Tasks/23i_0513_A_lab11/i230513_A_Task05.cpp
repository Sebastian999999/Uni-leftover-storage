#include <iostream>
using namespace std;

bool perfect(int number) {
    
    int sum = 0;

    for (int i = 1; i <= number / 2; i++) {
    
        if (number % i == 0) {
            sum += i;
        }
    }

    return sum == number;
}

int main() {
    
      cout << "Perfect numbers between 1 and 1000:\n";

    
    for (int i = 1; i <= 1000; i++) {
        
        if (perfect(i)) {
            
            cout << i << endl;
        }
    }
    return 0;
}

