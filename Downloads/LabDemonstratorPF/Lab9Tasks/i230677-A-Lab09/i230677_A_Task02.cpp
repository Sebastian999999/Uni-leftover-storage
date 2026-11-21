#include<iostream>
using namespace std;
int main()
{
 char arr[5]={'H','n','e','y','a'};
 int count=0;
 for (int i=0;i<5;i++)
     {
      if (arr[i]==97 || arr[i]==65)
         count++;
      else 
          continue;   
     }
 if (count>1)    
     cout<<"There are"<<" "<<count<<" "<<"a's in your name\n";
 else if (count==0)
         cout<<"There are no a's in your name\n";
 else
     cout<<"There is"<<" "<<count<<" "<<"'a' in your name\n";
 return 0;
}
