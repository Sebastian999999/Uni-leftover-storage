#include <iostream>
using namespace std;

int tripleCallByValue(int);
void tripleByReference(int&);
int main()
{
    int count;
    cout<<"Enter the value of count: ";
    cin>>count;
    cout<<"Before tripleCallByValue(): "<<count<<endl;
    int i=tripleCallByValue(count);
    cout<<"Value of function after tripleCallByValue(): "<<i<<endl;
    cout<<"Before tripleByReference(): "<<count<<endl;
    tripleByReference(count);
    cout<<"After tripleByReference(): "<<count<<endl;
    return 0;
}
int tripleCallByValue(int count)
{
    return count*3;
}
void tripleByReference(int &count)
{
    count *= 3;
}

