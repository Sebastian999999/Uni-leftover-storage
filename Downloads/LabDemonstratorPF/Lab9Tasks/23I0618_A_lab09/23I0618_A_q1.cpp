//iman 23i0618
#include<iostream>
using namespace std;
int main(){

        const int n = 5;
        int arr[n];
        bool flag = true;
        

        for(int i = 0; i < n; i++){
          cout<<"Enter numbers between 1 to 9: ";
          cin>>arr[i];
        }
        cout<<"The array is : {";
        for(int i = 0; i < n; i++){
          cout<<arr[i]<<" ";
        }
        cout<<"}"<<endl;
        int num;
        cout<<"Enter number which u want to check in array: ";
        cin>>num;
        if(num <= 0 || num > 9){
        cout<<"invalid input \n" ;
        }
        else{
        for(int i = 0; i < n; i++){
            if(num == arr[i]){
              flag = false;
              break;
            }
            else{
              flag = true;

            }
        }
        if(flag){
            cout<<"Number is not present \n";
        }
        else{
            cout<<"Number is present \n";            
        }
        }
	return 0;
}	
