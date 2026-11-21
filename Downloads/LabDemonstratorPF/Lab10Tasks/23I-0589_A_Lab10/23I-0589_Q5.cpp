#include<iostream>
using namespace std;
int main(){
	int arr[2][2];
	cout<<"Enter First Matrix: "<<endl;
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			cin>>arr[i][j];
		}
	}
	cout<<"Original:"<<endl;
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	
	cout<<"Transpose:"<<endl;
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			cout<<arr[j][i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
