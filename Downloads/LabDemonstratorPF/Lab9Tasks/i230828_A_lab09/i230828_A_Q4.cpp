#include<iostream>
using namespace std;
int main(){

   char arr [20];
   int lowercase = 0 , uppercase = 0, a=0, e=0 ,i1=0 ,o=0,u=0;
   cout<<"Enter a sentence: ";
   
      cin.getline (arr,20); 
   
   cout<<endl;
   for (int j = 0; j<20 && arr[j] != '\0' ; j++)
   {  if (arr[j] >=65 && arr[j] <91 )
      {  ++uppercase;
      }
      else if (arr[j] >=97 && arr[j] <123  )
      { ++lowercase;
      }
      
      if ( arr[j] == 'A' || arr[j] == 'a' )
      { ++a;
      }
      if ( arr[j] == 'E' || arr[j] == 'e' )
      { ++e;
      }
      if ( arr[j] == 'I' || arr[j] == 'i' )
      { ++i1;
      }    
      if ( arr[j] == 'O' || arr[j] == 'o' )
      { ++o;
      }
      if ( arr[j] == 'U' || arr[j] == 'u' )
      { ++u;
      }
    }
   cout<<"\nNumber of lowercase letters: "<<lowercase;
   cout<<"\nNumber of uppercase latters: "<<uppercase;
   cout<<"\nFrequency of A/a = "<<a;
   cout<<"\nFrequency of E/e = "<<e;
   cout<<"\nFrequency of I/i = "<<i1;
   cout<<"\nFrequency of O/o = "<<o;
   cout<<"\nFrequency of U/u = "<<u;
   
   for(int z = 0; z<20 ; ++z)
   {  if( arr[z] == ' ')
      arr[z+1]-=32;
   }
   cout<<endl<<arr;
   return 0 ;
   }
