#include <iostream>
using namespace std;

int main() {
const int size=5;
int old[size];
int square[size];

for(int i=0;i<size;i++)
{
    cout<<"Enter integers"<<endl;
    cin>>old[i];
}
for(int i=0;i<size;i++)
{
    old[i]=old[i]*old[i];
    
}
for(int i=0;i<size;i++)
{
    square[i]=old[size-i-1];
}
for(int i=0;i<size;i++)
cout<<square[i]<<" ";


return 0;
}