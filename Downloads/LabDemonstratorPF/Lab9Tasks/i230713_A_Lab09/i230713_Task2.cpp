#include <iostream>
using namespace std;

int main() {
char name[6];
int count=0;
cout<<"Enter Name "<<endl;
for(int i=0;i<6;i++)
cin>>name[i];

for(int i=0;i<6;i++)
if(name[i]=='a'||name[i]=='A')
count++;
cout<<"Number of a = "<<count<<endl;
return 0;
}