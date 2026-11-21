#include<iostream>
using namespace std;
int main(){

	cout<<"Enter the Values of Arr 1: "<<endl;
	int arr1[3][3];
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cin>>arr1[i][j];
		}
	}
	cout<<"Enter the Values of Arr 2: "<<endl;
	int arr2[3][3];
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cin>>arr2[i][j];
		}
	}
	int product[3][3];
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			for(int k=0;k<3;k++){
				product[i][j]=arr1[i][k]*arr2[k][j];
			}
		}
	}
	cout<<"Product: "<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<product[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
