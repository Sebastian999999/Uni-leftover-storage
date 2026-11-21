#include <iostream>
using namespace std;
int main(){

cout<<"    -----------------------------------------------------------------      "<<endl;
cout<<"1."<<endl<<endl;

char arr[]={'i','n','a','m'};
char b='a';
int n;
cout<<"Name: Inam"<<endl;
	for(int i=0; i<4; i++){
		if(b==arr[i]){
			n+=1;
		}
	}
	
	if(n>0)
	cout<<"There are "<<n<<" A in your name. "<<endl;
		
cout<<"    -----------------------------------------------------------------      "<<endl;
		
return 0;
}	
	
		
