#include<iostream>
using namespace std;
int main(){
int count = 0;
char arr[] = {'M','A','H','I','D'} ; 
  for ( int i = 0 ; i<5 ; i++)
  {   
       if ( arr[i] == 'A' || arr[i] == 'a' )
         {
           ++ count ;
           }
           
           }
           
           cout<<"The number of A/a in my name is : "<<count;
           
           return 0;
           }
