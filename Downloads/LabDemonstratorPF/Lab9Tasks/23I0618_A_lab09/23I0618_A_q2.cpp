//iman 23i0618
#include<iostream>
using namespace std;
int main(){
        
        char arr[5] = {'i','m','a','n','\0'};
 
        int count = 0;
        for(int i = 0 ; i < 5; i++){
          if('a' == arr[i]){
            count++;
          }
 
        }
        cout<<"There are "<<count<<" a's in iman \n";
 
        
        
	return 0;
}	
