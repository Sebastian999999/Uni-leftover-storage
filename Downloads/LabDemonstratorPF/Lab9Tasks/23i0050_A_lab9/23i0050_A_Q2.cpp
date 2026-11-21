#include<iostream>
using namespace std;
int main()
{   char arr[6]={'f','i','z','z','a'};
    int count=0;
     for(int i=0;i<6;i++)
     { if(arr[i]=='a')
       {  count++;
       }
       }
       cout<<"\nThere are "<<count<<"a's are present in Fizza";
     return 0;
     }
