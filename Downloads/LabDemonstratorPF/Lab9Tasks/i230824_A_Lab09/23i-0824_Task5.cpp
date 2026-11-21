#include <iostream>
using namespace std;
int main() 
{
 const int s = 5; 
 int arr[s];
 int sum = 0;
 cout << "Enter "<<s<<" integers:"<<endl;
    for(int i=0; i<s; ++i)
     {
  cout<<"Element "<<i+1<<": ";
  cin>>arr[i];
  if(arr[i]<0)
  arr[i]*=-1;
    }
  for(int i = 0; i<s; ++i)
   {
    int most_significant_digit = arr[i];
    while (most_significant_digit >= 10) 
    {
    most_significant_digit /=10;
        }
    sum += most_significant_digit;
    }
    cout<<"Sum of the most significant digits: " <<sum<<endl;

    return 0;
}

