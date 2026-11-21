# include <iostream>
using namespace std;
int main ()
{
const int size =4;
char arr[ ] = {'I','z','z','a'};
int count =0;
char ch ='a';
for (int i =0;i<4;i++){
if (arr[i]==ch){
count++;
}
}
cout<<"Number of a's in " << arr <<" are "<<count;





return 0 ;}



