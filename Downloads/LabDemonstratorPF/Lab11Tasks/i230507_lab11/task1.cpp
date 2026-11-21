#include <iostream>
using namespace std;

int tripleCallByValue(int);
void tripleCallByValue(int&);

int tripleCallByValue(int num)
{
num *= 3;
return num;
}

void tripleCallByValue(int& num)
{
num  *= 3;
}



int main()
{

int count = 5;
cout<<"INitial value of count: "<<count<<endl;
int tripled = tripleCallByValue(count);
cout<<"Value of count after tripleCallByValue"<<count<<endl;

cout<<"Value returned bytripleCallByValue"<<tripled<<endl;

tripleCallByValue(count);
cout<<"Value of count after tripleCallByValue"<<count<<endl;


return 0;
}
