#include<iostream>
using namespace std;

int divide(int a,int b=2);

int main()
{
	int a,b;
	cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;
    int result1=divide(a);
    int result2=divide(a,b);
    cout<<"Result with default parameter: "<<result1<<endl;
    cout<<"Result with provided parameters: "<<result2<<endl;
    return 0;
}

int divide(int a,int b)
{
    return a/b;
}

