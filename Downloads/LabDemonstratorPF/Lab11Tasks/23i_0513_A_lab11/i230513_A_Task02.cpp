#include <iostream>
#include <cstdlib> 
#include <ctime>
using namespace std;   

int flip() {
    // Generate a random number between 0 and 1
    return rand() % 2; 
}

int main() {
    // Seed the random number generator
    srand(time(0));
    
    int heads = 0;
    int tails = 0;

    // Simulate coin tossing 100 times
    for (int i = 0; i < 100; ++i) {
        
        int result = flip();

        // Print the result of the current toss
        if (result == 0) {
            cout << "Tails\n";
            ++tails;
        } else {
            cout << "Heads\n";
            ++heads;
        }
    }

    // Print the total counts of heads and tails
    cout << "Total number of heads: " << heads << endl;
    cout << "Total number of tails: " << tails << endl;

    return 0;
}

