#include<iostream>
using namespace std;
int main(){
	int arr[5],num;
	cout<<"Enter the Numbers in the array from 0-9.";
	for(int i=0;i<5;i++){
		cin>>arr[i];
		if(arr[i]>9||arr[i]<0){
			cout<<"Invalid Input.";
			return 0;
		}
	}
	cout<<"Enter the number to be checked:";
	cin>>num;
	bool is_present;
	for(int i=0;i<5;i++){
			if(arr[i]==num){
				is_present=true;
				break;
			}
	}
	if(is_present){
		cout<<"The number exists.";
		
	}
	else{
		cout<<"Not found";
	}
	return 0;
}
