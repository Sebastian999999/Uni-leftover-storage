#include <iostream>
using namespace std;
int main()
{
  char arr[20];int v[6]={0};
  int countv=0,countl=0,countu=0,c=0;
  cout<<"Enter a sentence"<<endl;
  cin.get(arr,19);
   for( int i=0 ; i<20 ; i++)
   {
  
     if (arr[i]>='A' && arr[i]<='Z')
     	countu++;
     if (arr[i]>='a' && arr[i]<='z')
     	countl++;
             
   }
   for( int i=0 ; i<20 ; i++)
   {
     if(arr[i]=='A' || arr[i]=='a')
     	v[0]++;
      if(arr[i]=='E' || arr[i]=='e')
     	v[1]++;
      if(arr[i]=='I' || arr[i]=='i')
     	v[2]++;
      if(arr[i]=='O' || arr[i]=='o')
     	v[3]++;
     if(arr[i]=='U' || arr[i]=='u')
     	v[4]++;
    } 
   cout<<"Upper case letters are"<<countu<<endl;
    cout<<"lowercase letters are"<<countl<<endl;
   cout<<"The vowel A is "<<v[0]<<" Times"<<endl;
   cout<<"The vowel E is "<<v[1]<<" Times"<<endl;
   cout<<"The vowel i is "<<v[2]<<" Times"<<endl;
   cout<<"The vowel o is "<<v[3]<<" Times"<<endl;
   cout<<"The vowel u is "<<v[4]<<" Times"<<endl;
   for( int i=0 ;i<20;i++)
   {
     if(arr[i]==' ' || arr[0])
       {
         if (arr[i]>='a' && arr[i]<='z')
         arr[i]=arr[i]-32;
       }
   }
   for( int i=0 ;i<20;i++)
   {
    cout<<arr[i]<<" ";
   }
   return 0;
  }
     
  
