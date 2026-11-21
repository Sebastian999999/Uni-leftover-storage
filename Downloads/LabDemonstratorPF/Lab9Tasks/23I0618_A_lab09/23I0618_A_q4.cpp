//iman 23i0618
#include<iostream>
using namespace std;
int main(){
        const int n = 21;
        char arr[n];
        int count=0, count1=0;
        cout<<"Enter a sentence: ";
        //cin.ignore();
        //for(int i = 0 ; i < n; i++){
          //cin>>arr[i];
          //if(cin.get())
          //break;
        //}
        
        cin.get(arr,n);
        cout<<"Sentence entered up-to 20 characters is: "<<arr<<endl;
        
        //lower and upper cases
       for(int i = 0 ; i < n; i++){
           if(arr[i] >= 'a' && arr[i] <= 'z'){
           count++;
           }
           if(arr[i] >= 'A' && arr[i] <= 'Z'){
           count1++;
           }
        }
        cout<<"Number of upper case letters: "<<count1++<<endl;
        cout<<"Number of lower case letters: "<<count++<<endl;
        
        int v[5]={0,0,0,0,0};
        for(int i = 0 ; i < n; i++){
           if(arr[i] == 'a' || arr[i] == 'A'){
           v[0]++;
           }
           if(arr[i] == 'e' || arr[i] == 'E'){
           v[1]++;
           }
           if(arr[i] == 'i' || arr[i] == 'I'){
           v[2]++;
           }
           if(arr[i] == 'o' || arr[i] == 'O'){
           v[3]++;
           }
           if(arr[i] == 'u' || arr[i] == 'U'){
           v[4]++;
           }
           
        }
        cout<<"vowels are (a,e,i,o,u) =";
        for(int i = 0 ; i < 5; i++){
          cout<<v[i]<<" ";
        }
        cout<<endl;
        
        for(int i = 0 ; i < n; i++){
           if(arr[0] >= 'a' && arr[0] <= 'z'){
           arr[0] -= 32;
           }
          if(arr[i] == 32){
            arr[i+1] -= 32;
          
          }
        }
          cout<<arr<<endl;
        
 
        
	return 0;
}	
