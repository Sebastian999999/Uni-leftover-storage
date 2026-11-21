#include<iostream>
using namespace std;

int main(){
int array[5];
  for(int i=0; i<5; ){
     cout<<"Enter an integer(1-9) : ";
     int num;
     cin>>num;
     if(num>=1 && num<=9){
     array[i]=num;
     i++;
     }
     else
     cout<<"Invalid input"<<endl;
     }
     int num1;
     cout<<"Enter the number  which you want to find in array : ";
     cin>>num1;
     bool flag = true;
     for(int j=0; j<5; j++){
        if(array[j]==num1){
          flag=true;
          }
        else
         flag=false;
         }
      if(flag==true)
      cout<<"The number is present in array"<<endl;
      else
      cout<<"The number is present in array"<<endl;
return 0;
}
