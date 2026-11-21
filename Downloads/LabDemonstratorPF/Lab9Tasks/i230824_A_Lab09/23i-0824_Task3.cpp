#include <iostream>
using namespace std;
int main() 
{
 int original_Num[5];
 int squared_Num[5];
 cout<<"Please enter 5 integers:"<<endl;
  for(int i = 0; i<5; ++i)
     {
  cout<<"Enter number "<<i+1<<": ";
  cin>>original_Num[i];
  squared_Num[i] = original_Num[i]*original_Num[i];
    }

  int reversed_Squared_Num[5];
    for(int i=0; i<5; ++i) 
    {
    reversed_Squared_Num[4-i]=squared_Num[i];
    }
  cout<<"Squared numbers in reverse order: ";
    for(int i=0; i<5; ++i)
     {
     cout<<reversed_Squared_Num[i]<< " ";
    }
    cout<<endl;

    return 0;
}

