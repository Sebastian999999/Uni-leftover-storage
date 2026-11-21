#include<iostream>
using namespace std;


void perfect(int n) 
{
    int sum = 0; 
    for(int i = 1; i <= n/2; i++) 
    {
        if(n % i == 0) 
        {
            sum += i;
        }
    }
    if(sum == n) 
    {
        cout << n << " is a perfect number" << endl;
    }
}

int main() 
{
    cout << "Perfect numberbers between 1 and 1000:" << endl;
    for(int number = 1; number <= 1000; number++) 
    {
        perfect(number);
    }
   
   
    return 0;
}

