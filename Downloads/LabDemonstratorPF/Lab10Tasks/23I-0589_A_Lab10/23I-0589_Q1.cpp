#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main(){
	srand(time(0));
	int arr[5][5];
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			arr[i][j]=rand()%100+1;
		}
	}
	cout<<endl;
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	for(int i=0;i<5;i++){
		for(int j=4;j>=0;j--){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}

