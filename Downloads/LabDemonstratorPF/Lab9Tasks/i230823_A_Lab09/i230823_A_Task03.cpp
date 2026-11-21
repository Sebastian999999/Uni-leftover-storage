#include<iostream>
using namespace std;
int main(){

int arr[5], rearr[5] , j = 4;

cout<<"Enter elements of array: ";
for(int i = 0; i < 5 ; i++){

cin>>arr[i];

}
cout<<"Array elements after squaring them: ";
for(int i = 0; i < 5 ; i++){

arr[i] = arr[i]*arr[i];
cout<<arr[i]<<" ";

}
for(int i = 0; i < 5 ; i++){
	
	rearr[j] = arr[i];
	
	j--;
	
	
}cout<<endl;
	
cout<<"Elements of array in reverse order are: ";
for(int i = 0; i < 5 ; i++){

cout<<rearr[i]<<" ";
}
cout<<endl;

return 0;

}
