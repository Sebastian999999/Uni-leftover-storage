#include <iostream>
using namespace std;
int main ()
{
const int size=5;
int n=1;
float arr[size];


for(int i=0;i<5;i++){
 cout<<"Enter the no "<<n<<" element"<<endl;
 cin>>arr[i];
	while (arr[i]<0 || arr[i]>10){
	 cout<<"Please enter a valid number(0-9)"<<endl;
	 cin>>arr[i];
	}
++n;
}
int num;
cout<<"Enter a number to search: ";
cin>>num;

    bool present=false;
    for(int i=0; i<size;i++) {
        if(arr[i]==num) {
            present=true;
            break;
        }
    }

if(present) 
{
cout<<num<<" is present in the array."<<endl;
    } 
else{
cout<<num<<" is not present in the array."<<endl;
    }
return 0;
}
