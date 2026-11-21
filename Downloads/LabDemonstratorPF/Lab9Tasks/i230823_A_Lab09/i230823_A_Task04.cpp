#include<iostream>
using namespace std;
int main(){

char arr[20] ;
int vowels[10] = {0};
int upcount = 0, lowcount = 0;

cout<<"Enter a sentence: ";
cin.get(arr,19);

for(int i = 0; i < 20; i++){
cout<< arr[i];

if(arr[i] >= 'A' && arr[i] <= 'Z'){

upcount++;

}
if(arr[i] >= 'a' && arr[i] <= 'z'){

lowcount++;

}

if( arr[i] == 'a' || arr[i] == 'A')
vowels[0]++;


if( arr[i] == 'e' || arr[i] == 'E')
vowels[1]++;


if( arr[i] == 'i' || arr[i] == 'I')
vowels[2]++;


if( arr[i] == 'o' || arr[i] == 'O')
vowels[3]++;

if( arr[i] == 'u' || arr[i] == 'U')
vowels[4]++;
}

cout<<"Number of upercase letters: "<<upcount<<endl;
cout<<"Number of lowercase letters: "<<lowcount<<endl<<endl;
cout<<"Number of a's : "<<vowels[0]<<endl;
cout<<"Number of e's : "<<vowels[1]<<endl;
cout<<"Number of i's : "<<vowels[2]<<endl;
cout<<"Number of o's : "<<vowels[3]<<endl;
cout<<"Number of u's : "<<vowels[4]<<endl;

for(int i = 0; i< 20; i++){

if( arr[i] == ' ' ){


arr[i+1] = arr[i+1] - 32;

}}
for(int i = 0 ; i < 20 ; i++){
cout<<arr[i];


}cout<<endl;

return 0;
}

