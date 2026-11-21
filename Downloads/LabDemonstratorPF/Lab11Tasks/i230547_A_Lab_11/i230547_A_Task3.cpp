#include<iostream>

using namespace std;

int divide(int a, int b=2);

int main()
{



int result1=divide(10);

cout<<"Result with default parameter:" <<result1<<endl;

int result2=divide(20,4);

cout<<"Result with 1 argument:"<<result2<<endl;

return 0;

}

int divide(int a, int b)
{

return a/b;

}



