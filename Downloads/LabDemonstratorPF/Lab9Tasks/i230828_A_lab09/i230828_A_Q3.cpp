#include<iostream>
using namespace std;
int main(){
   
 int  arr [5] , arr2[5] ;
 
 cout<<"Enter the inputs of array: ";
 
 for (int i = 0 ; i<5 ; ++i)
 {  cin>>arr[i];
    arr[i] *= arr[i] ;
    cout<<endl;
    }   
 
 
 
 for (int k =0 ; k<5 ; ++k)
 {  arr2[k] = arr[4-k];
 }
 
 for (int l=0 ; l<5 ; ++l)
 {  cout<<arr2[l]<<endl;
 }
 
 return 0;
 }
