//Humna Sadia
//23i-0580
//CS-A
//Question # 2

#include <iostream>
using namespace std;

int main()
{
  int count =0;
  char name[5]={'H','u','m','n','a'};
  
  for(int i=0 ; i<5; i++)
  {
    if (name[i]=='a')
    {
      count += 1;
    }
  }
  
  cout << "Number of a's in my name is: " << count << endl;
  
  return 0;	
}
