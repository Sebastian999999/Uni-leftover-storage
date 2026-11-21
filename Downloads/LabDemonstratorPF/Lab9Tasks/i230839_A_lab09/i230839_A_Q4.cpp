#include <iostream>
using namespace std;
int main(){

cout<<"    -----------------------------------------------------------------      "<<endl;
cout<<"1."<<endl<<endl;

int upper, lower, vowel=0;
char arr[20];
	
cout<<"Enter a sentence. ";
	for(int i=0; i<20; i++){	
		
		cin>>arr[i];
	}
	
	for(int i=0; i<20; i++){
		cout<<arr[i]<<" ";
	}
	
	cout<<endl;
	
	
	for(int i=0; i<20; i++){
		if(arr[i]>='A' && arr[i]<='Z'){
			upper+=1;
		}
	}
	cout<<"Number of upper case letters are: "<<upper<<endl;
	
	
	for(int i=0; i<20; i++){
		if(arr[i]>='a' && arr[i]<='z'){
			lower+=1;
		}
	}
	cout<<"Number of lower case letters are: "<<lower<<endl;
	
	
	
	for(int i=0; i<20; i++){
		if(arr[i]=='a'||arr[i]=='A'){
			vowel+=1;
		}
	}
	cout<<"Number of vowel letter A is "<<vowel<<endl;
	
	vowel=0;
	
	
	for(int i=0; i<20; i++){
		if(arr[i]=='e'||arr[i]=='E'){
			vowel+=1;
		}
	}
	cout<<"Number of vowel letter E is "<<vowel<<endl;
	
	vowel=0;
	
	for(int i=0; i<20; i++){
		if(arr[i]=='i'||arr[i]=='I'){
			vowel+=1;
		}
	}
	cout<<"Number of vowel letter I is "<<vowel<<endl;
	
	vowel=0;
	
	
	for(int i=0; i<20; i++){
		if(arr[i]=='o'||arr[i]=='O'){
			vowel+=1;
		}
	}
	cout<<"Number of vowel letter O is "<<vowel<<endl;
	
	vowel=0;
	
	
	for(int i=0; i<20; i++){
		if(arr[i]=='u'||arr[i]=='U'){
			vowel+=1;
		}
	}
	cout<<"Number of vowel letter U is "<<vowel<<endl;

	for(int i=0; i<20; i++){
		if(arr[i]==' '){
			arr[i+1]+=32;
		
	
		}
	}
	
	


return 0;
}		
