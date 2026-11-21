#include <iostream>
using namespace std;

int divide(int a, int b=2)
{
return a/b;
}

int main()
{
int result1 = divide(10);
int result2 = divide(6,4);
cout<<"Result1: "<<result1<<endl;
cout<<"Result2: "<<result2<<endl;



return 0;
}
