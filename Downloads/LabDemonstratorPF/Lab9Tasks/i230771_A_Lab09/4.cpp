// MUHAMMAD ANAS KHATTAK 
// 23i-0771
// CS-23A 

#include<iostream>
using namespace std;
int main(){
int size= 20;
char ch[size];
int uppercase =0, lowercase = 0;

cout<<"Enter a sentence."<<endl;

for(int i=0 ; i<size ; i++){
  cin>>ch[i];
  cout<<ch[i]<<"  ";
 if(ch[i]>='A' && ch[i]<='Z'){
   uppercase++;
  }
  if(ch[i]>='a' && ch[i]<='z'){
   lowercase++;
  }
  }
  int vowel = 0;
   for(int i=0 ; i<size ; i++){
     if(ch[i] == 'a' || ch[i] == 'A')
      vowel+= 1;
      }
  cout<<" The number of vowel A are: "<<vowel<<endl;    
  
  vowel = 0;
   for(int i=0 ; i<size ; i++){
     if(ch[i] == 'e' || ch[i] == 'E')
      vowel+= 1;
      }
  cout<<" The number of vowel A are: "<<vowel<<endl;   
  
  vowel = 0;
   for(int i=0 ; i<size ; i++){
     if(ch[i] == 'i' || ch[i] == 'I')
      vowel+= 1;
      }
  cout<<" The number of vowel A are: "<<vowel<<endl;   
  vowel = 0;
   for(int i=0 ; i<size ; i++){
     if(ch[i] == 'o' || ch[i] == 'O')
      vowel+= 1;
      }
  cout<<" The number of vowel A are: "<<vowel<<endl;   
  vowel = 0;
   for(int i=0 ; i<size ; i++){
     if(ch[i] == 'u' || ch[i] == 'U')
      vowel+= 1;
      }
  cout<<" The number of vowel A are: "<<vowel<<endl;   

 
 cout<<endl;
 cout<<"The number of uppercase letters are: "<<uppercase<<endl;
 cout<<"The number of lowercase letters are: "<<lowercase<<endl;


    


 return 0;
} 
