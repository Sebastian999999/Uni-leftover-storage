#include <iostream>

using namespace std;

      bool isPerfect(int number) {
      int factorsSum = 0;
      for (int i = 1; i < number; ++i) {
        if (number % i == 0) {
            factorsSum += i;
        }
    }
      return factorsSum == number;
}

    void findPerfectNumbers() {
    cout << "Perfect numbers between 1 and 1000:" << std::endl;
    for (int num = 1; num <= 1000; ++num) {
        if (isPerfect(num)) {
            cout << num << " ";
        }
    }
    cout << endl;
}

   int main() {
    findPerfectNumbers();
    return 0;
}

