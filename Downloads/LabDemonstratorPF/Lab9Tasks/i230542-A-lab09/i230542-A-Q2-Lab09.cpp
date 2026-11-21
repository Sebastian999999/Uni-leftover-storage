#include<iostream>
using namespace std;
int main(){
char a[6]={'t','a','y','y','a','b'};
char b='a';
int count=0;
for(int i=0;i<5;i++){
if(a[i]==b)
{
count++;
}

}
cout<<"there are "<<count<<" a's in tayyab";
return 0;
}
