//Muhammad Ali   23I-2565

#include<iostream>
 using namespace std;
 
 int main() {
 
 	char x;
 	cout << "Enter any character: ";
 	cin >> x;
 	
 	
 	int a;
 	
 	(x >='0' && x<='9' )? a=1 : (x>='A' && x<='Z')? a=2 : (x>='a' && x<='z')? a=3 : a=4;

 	
 	switch(a)
 	{
 	case 1:
 		cout << "\nThe Entered Input is a Digit." << endl; break;
 	
 	case 2:	
 		cout << "\nThe Entered Input is an Alphabet." << endl; break;
 		
 	case 3:	
 		cout << "\nThe Entered Input is an Alphabet." << endl; break;	
 		
 	default:
 		cout << "\nInvalid Input." << endl;
 	
 	}
 	
 
 return 0;
 }
