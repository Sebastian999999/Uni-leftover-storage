#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int flip();

int main()
{
    srand(time(0));
    int headsCount=0;
    int tailsCount=0;
    cout<<"Simulating coin toss...\n";
    for (int i = 0; i < 100; ++i)
	{
        int result=flip();
        if(result==0)
            tailsCount++;
        else
            headsCount++;
        cout<<(result==0?"Tails":"Heads")<<endl;
    }
    cout<<"Number of Tails: "<<tailsCount<<endl;
    cout<<"Number of Heads: "<<headsCount<<endl;
    return 0;
}

// Function to simulate coin toss
int flip() {
    // Generate a random number either 0 or 1
    return rand() % 2;
}

