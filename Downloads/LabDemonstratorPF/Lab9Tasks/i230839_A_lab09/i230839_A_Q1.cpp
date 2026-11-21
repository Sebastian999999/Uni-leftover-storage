#include <iostream>
using namespace std;
int main(){

cout<<"    -----------------------------------------------------------------      "<<endl;
cout<<"1."<<endl<<endl;

int a=0, b=0, c=0, d=0;
int arr[5];
cout<<"Enter 5 integers between 1 to 9. "<<endl;

	for(int i=0,j=1; i<5,j<=5; i++,j++){
		cout<<"Enter "<<j<<" number: ";
		cin>>arr[i];	

	}
	for(int i=0; i<5; i++){
		if(arr[i]<1 || arr[i]>9){
			d+=1;
		}
	}
	
	
	
if(d==0){
	
	cout<<"Enter a number you want to check: ";
	cin>>a;	

	
	for(int i=0; i<5; i++){
		if(a==arr[i]){
			b+=1;
		}
	}

	
	if(b==0){
		cout<<"The number "<<a<<" is not present in this array."<<endl;	
	}
	else	
		cout<<"The number "<<a<<" is present in this array."<<endl;

}

else
	cout<<"Please enter a number btw 1 to 9. "<<endl;
cout<<"    -----------------------------------------------------------------      "<<endl;
		
return 0;
}
