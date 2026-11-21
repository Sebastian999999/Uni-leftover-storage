#include<iostream>
#include<iomanip>
using namespace std;

int main(){

// MASAB TAHIR 23I-0006 A

char arr[11]={'m','a','s','a','b',' ','t','a','h','i','r'};

cout<<"elements in array:\n";
for(int i=0;i<11;++i){
cout<<arr[i];
}
int count=0;
for(int i=0;i<11;++i){
if(arr[i]=='a'){
count++;}
}


cout<<"\n\nthe total a in name are:"<<count<<endl;;


return 0;

}
