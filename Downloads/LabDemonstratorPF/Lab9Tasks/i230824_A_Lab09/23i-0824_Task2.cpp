#include <iostream>
using namespace std;
int main() 
{
 char name[] ="Taha";
 int count_a = 0;
    for (int i=0; name[i]!='\0'; ++i) 
 {
   if(name[i] == 'a' || name[i] == 'A') 
   {
    count_a++;
        }
    }
 cout<<"Number of 'a's in my name: "<<count_a<<endl;

    return 0;
}

