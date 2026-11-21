#include<iostream>
using namespace std;

int main(){
int num, array1[5];
int array2[5];
cout<<"Enter five integers"<<endl;
 for(int i=0; i<5; i++){
    cin>>num;
    num= num*num;
    array1[i]=num;
}
 
 for(int i=0; i<5;i++){
    cout<<array1[i]<<" ";
    }
    cout<<endl;
  for(int j=0,k=4; j<5; j++,k--){
      array2[k]=array1[j];
      
     }
  cout<<"The array in reversed order is :"<<endl;
  for(int x=0; x<5; x++){
    cout<<array2[x]<<" ";
    }
    cout<<endl;
return 0;
}
