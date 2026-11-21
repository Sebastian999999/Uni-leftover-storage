
#include<iostream>
using namespace std;
int main(){

	int num[5];
	int squares[5];
	int reversedSquares[5];
	
	cout  << "Enter the five numbers  : \n";
	
	for(int i=0;i<5;i++){
	   cin >> num[i];
	 squares[i] = num[i] * num [i];
	}
	 
	 for(int i=0;i<5;i++){
	 reversedSquares[i] = squares[4-i];
	}
	 
	 cout << "squares in reverse order :\n ";
	  for(int i=0;i<5;i++){
	  cout << reversedSquares[i] << endl;
	 }
	 
return 0;
}
