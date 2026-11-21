//iman 23i0618
#include<iostream>
using namespace std;
int main(){
        
        const int n = 5;
        int arr[n], arr1[n], reversedarr[n];
         for(int i = 0; i < n; i++){
          cout<<"Enter integer: ";
          cin>>arr[i];
        }
         cout<<"The array is : {";
        for(int i = 0; i < n; i++){
          cout<<arr[i]<<" ";
        }
        cout<<"}"<<endl;
        
        
        for(int i = 0; i < n; i++){
          arr1[i] = arr[i]*arr[i];
        }
        cout<<"The array having squares is : {";
        for(int i = 0; i < n; i++){
          cout<<arr1[i]<<" ";
        }
        cout<<"}"<<endl;
        
        for(int i = 0; i < n; i++){
          reversedarr[i] = arr1[n-i-1];
        }
        cout<<"The reversed array is : {";
        for(int i = 0; i < n; i++){
          cout<< reversedarr[i]<<" ";
        }
        cout<<"}"<<endl;
        
        
        
	return 0;
}	
