#include <iostream>
using namespace std;
int main()
{
  int count=0;
  char name [7]={"zibyah"};
  for( int i=0; i<7 ; i++)
  {
    if( name [i]=='a')
    count++;
  }
  cout<<"There is "<<count<<" a in your name"<<endl;
  return 0;
 }
