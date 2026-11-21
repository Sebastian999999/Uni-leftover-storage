//i230720_Ahmed Mujtaba
#include<iostream>
using namespace std;
int main() {
	char name[6] = {"Ahmad"};
	int count = 0;
	for(int i = 0; i < 6; i++) {
		if(name[i] == 'A' || name[i] == 'a') count++;
		
	}
	cout << "You have " << count << " A's in your name!";
	
}
