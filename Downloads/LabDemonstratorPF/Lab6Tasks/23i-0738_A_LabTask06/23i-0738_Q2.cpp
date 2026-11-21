#include <iostream>
using namespace std;
int main(){
   char a;
   cout<<"Enter character:"<<endl;
   cin>>a;
   bool ualpha=(a>='A'&& a<='Z');
   bool lalpha=(a>='a' && a<='z');
   bool number=(a>='0' && a<='9');
   
   switch(ualpha){
   case true:
   cout<<"It is uppercase alphabet"<<endl;
   break;
   case false:
   switch(lalpha){
   case true:
   cout<<"It is lower case alphabet"<<endl;
   break;
   case false:
   switch(number){
   case true:
   cout<<"It is number"<<endl;
   break;
   case false:
   cout<<"INVALID INPUT"<<endl;
   break;
   }
   }
   }
   
   return 0;
}   
