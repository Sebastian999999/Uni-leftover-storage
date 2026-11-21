#include<iostream>
using namespace std;
int main(){

int arr[5],  find;
bool c = 0;


cout<<"Enter 5 integers b/w 1-9: ";
for(int i = 0; i < 5 ; i++){


do{

cin>>arr[i];

if( !(arr[i] >= 1 && arr[i] <=9)){

cout<<"You entered out of range value: ";
}


}
while ( !(arr[i] >= 1 && arr[i] <=9));
	
}

cout<<"Enter the number to find in array: ";
cin>>find;

for(int i = 0; i < 5 ; i++){

if(arr[i] == find){

c = 1;
break;
	}
}

if(c == 1)
cout<<find<<" is present in array\n";

else
cout<<find<<" is not present in array\n";

return 0;
}
