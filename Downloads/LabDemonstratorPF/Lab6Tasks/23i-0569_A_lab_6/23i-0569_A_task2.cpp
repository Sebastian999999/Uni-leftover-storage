#include <iostream>
using namespace std;

int main() {
   char sign;
   cout<<"EITHER ENTER A DIGIT OR AN ALPHABET"<<endl;
   cin>>sign;
   
   			switch(sign>=97 && sign<= 122  || sign>=65 && sign<= 90)
   {
   	case 1 :
   cout<<"CHARACTER IS AN ALPHABET"<<endl;
   	break;
   	default :
  			 switch ( sign>=48 && sign<=57)
   {
   	case 1 : 
   cout<<"CHARACTER IS A DIGIT"<<endl;
   	break;
   		default : 
   cout<<"INVALID INPUT"<<endl;
   
   
   }
   }
   
   
   
   
   
   
   
      
   
   
   
   
   return 0;
}
