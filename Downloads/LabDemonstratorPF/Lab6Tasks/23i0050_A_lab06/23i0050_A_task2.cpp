#include<iostream>
using namespace std;
int main()
{  char c;
 cout<<"\nEnter a character=";
 cin>>c;
 switch(((c>='A')&&(c<='Z'))||((c>='a')&&(c<='z')))
 { case 1:
  cout<<"\n You enter alphbet";
  break;
  
  case 0:
  switch((c>='0')&&(c<='9'))
  {case 1:
  cout<<"\nYou enter digit";
  break;
  
  case 0:
  cout<<"\nYou enter invalid Character";
  break;
  }
  }
  return 0;
  }
