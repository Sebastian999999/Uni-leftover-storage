#include <iostream>
using namespace std;

int main() 
{
    const int size = 6;
    char name[] = "Muneeb";

    int count = 0;
    for (int i = 0; i < size; ++i) 
    {
        if (name[i] == 'a' || name[i] == 'A')
        {
            count++;
        }
    }

    cout << "Number of 'a's in my name: " << count << endl;

    return 0;
}

