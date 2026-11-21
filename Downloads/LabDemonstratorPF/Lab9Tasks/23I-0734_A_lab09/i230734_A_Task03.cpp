#include <iostream>
using namespace std;
int main()
{
  int a[5],b[5],j=0;
  cout<<"Enter values in first array"<<endl;
  for(int i=0 ; i<5; i++)
    {
      cin>>a[i];
     }
    for(int i=0 ; i<5; i++)
    {
      a[i]=a[i]*a[i];
     } 
  for(int i=4 ; i>=0 ; i--)
  {
    b[i]=a[j];
    j++;
  }
  cout<<"Arrays after updation"<<endl;
  for(int i=0 ; i<5 ; i++)
  {
    cout<<"Array one "<<a[i]<<" ";
  }
  cout<<endl;
   for(int i=0 ; i<5 ; i++)
  {
    cout<<"Array two"<<b[i]<<" ";
  }
  cout<<endl;
 return 0;
}
