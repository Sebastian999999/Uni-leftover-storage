#include <iostream>
using namespace std;

int divide(int a, int b = 2);


int main() 
{
    int a = 10;

    
    int result1 = divide(a);
    cout << "Result with default parameter (b=2): " << result1 << endl;

    int b = 5;
    int result2 = divide(a, b);
    cout << "Result with specified parameter (b=" << b << "): " << result2 << endl;

    return 0;
}

int divide(int a, int b) 
{
    return a / b;
}
