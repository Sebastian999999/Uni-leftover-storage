#include<iostream>
using namespace std;

int main(){
char array[]="Haris";
int count=0;
 for(int i=0; i<=5; i++){
    if(array[i]=='a' || array[i]=='A'){
    count++;
 }
 }
cout<<"There are "<<count<<" a's in my name"<<endl;

return 0;
}
