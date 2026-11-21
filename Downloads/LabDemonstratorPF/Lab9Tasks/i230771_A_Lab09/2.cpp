// MUHAMMAD ANAS KHATTAK 
// 23i-0771
// CS-23A 

#include<iostream>
using namespace std;
int main(){
int size = 4;
int sum = 0;
char Name[size]={'a','n','a','s'};
for(int i=0 ; i<size ; i++){
   
   if(Name[i]=='a'){
   sum+= 1;
   }
}  
cout<<"Your Name is Anas."<<endl;
cout<<"The amount of a's in your name are "<<sum<<endl;
return 0;
}
