#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int flip()
{
return rand() % 2;
}
int main()
{
srand(static_cast<unsigned int>(time(0)));

int headsCount=0;
int tailsCount=0;
for(int i=0; i<10;++i)
{
int result = flip();
if (result == 0){
++tailsCount;
cout<<"Tails"<<endl;
}
else{
++headsCount;
cout<<"heads"<<endl;
}
}
cout<<"Number of heads: "<<headsCount<<endl;
cout<<"Number of tails: "<<tailsCount<<endl;




return 0;
}
