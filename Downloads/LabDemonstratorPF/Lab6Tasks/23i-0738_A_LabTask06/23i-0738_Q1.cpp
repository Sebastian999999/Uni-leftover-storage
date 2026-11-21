#include <iostream>
#include <iomanip>
using namespace std;
int main(){
   int n1,n2;
   char op;
    cout<<"Menu"<<endl;
   cout<<setw(27)<<setfill('-')<<'-'<<endl;
   cout<<"+ Addition"<<endl;
   cout<<"- Subtraction"<<endl;
   cout<<"* Multiplication"<<endl;
   cout<<"/ Division"<<endl;
   cout<<"% Modulus"<<endl;
   cout<<". Cancel"<<endl;
   cout<<endl;
   cout<<setw(27)<<setfill('-')<<'-'<<endl;
   cout<<"Enter first number :";
   cin>>n1;
   cout<<"Enter second number :";
   cin>>n2;
   cout<<"Enter operation :";
   cin>>op;
   cout<<setw(27)<<setfill('-')<<'-'<<endl;
   switch(op){
   case'+':
   cout<<n1<<" + "<<n2<<" ="<<n1+n2<<endl;
   break;
   case'-':
   cout<<n1<<" - "<<n2<<" ="<<n1-n2<<endl;
   break;
   case'*':
   cout<<n1<<" * "<<n2<<" ="<<n1*n2<<endl;
   break;
   case'/':
   switch(n2){
   case 0:
   cout<<"Division not possible"<<endl;
   return 0;
  default:
   cout<<n1<<" / "<<n2<<" ="<<float(n1)/n2<<endl;
   
   }
   break;
   case'%':
   cout<<n1<<" % "<<n2<<" ="<<int(n1)%n2<<endl;
   break;
   case'.':
   cout<<"Thank you"<<endl;
   break;
   default:
  cout<<"Invalid operation"<<endl;
   break;
   }
   return 0;
}
   
