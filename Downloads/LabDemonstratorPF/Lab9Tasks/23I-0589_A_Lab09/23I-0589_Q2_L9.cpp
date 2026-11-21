#include<iostream>
using namespace std;
int main(){
	char name[4]={'a','a','i','z'};
	char a;
	int count;
	cout<<"Enter a to check its existence.";
	cin>>a;
	for(int i=0;i<4;i++){
		if(a==name[i]){
			count++;
		}
	}
	cout<<"count:"<<count<<endl;
	return 0;
}
