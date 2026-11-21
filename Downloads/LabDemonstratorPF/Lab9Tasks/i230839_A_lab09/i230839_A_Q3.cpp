#include <iostream>
#include <cmath>
using namespace std;
int main(){

cout<<"    -----------------------------------------------------------------      "<<endl;
cout<<"1."<<endl<<endl;

int arr[5];
int b[5];
	for(int i=0; i<5; i++){
		cout<<"Enter "<<i<<"th number of array:";
		cin>>arr[i];
	
	}

cout<<endl<<"After reversing the squares of the number of arrays"<<endl<<endl;
	
	for(int i=0, j=4; i<5,j>=0; i++, j--){
		b[j]=pow(arr[i],2);
	}
	
	for(int i=0; i<5; i++){
		cout<<"The "<<i<<"th number of array: "<<b[i]<<endl;
	}
	
cout<<"    -----------------------------------------------------------------      "<<endl;
	
return 0;
}
		
