#include <iostream>
#include <cstdlib> 
#include <ctime>   
using namespace std;


int flip() 
	{
    int ans= rand() % 2; 
    return ans;
        }



int main() {
    srand(time(0)); 

    int headsCount = 0;
    int tailsCount = 0;
    

    
    for (int i = 0; i < 100; ++i) 
    {
        int result = flip();
        if (result == 0) 
        {
            cout << "Tails" << endl;
            tailsCount++;
        }
        else 
        {
            cout << "Heads" << endl;
            headsCount++;
        }
    }

    // Print the results
    cout << "\nNumber of Tails: " << tailsCount << endl;
    cout << "Number of Heads: " << headsCount << endl;

    return 0;
}

