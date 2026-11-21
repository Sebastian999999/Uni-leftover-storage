#include<iostream>
using namespace std;
int main()
{
int size=20;
char ar[size];
int vow[5]={0};
int up=0,low=0;

cout<<"Enter a sentence of 19 characters. "<<endl;
cin.getline(ar,19);
for(int i=0;ar[i]!='\0';i++)
{
if(ar[i]>='A' && ar[i]<='Z')
up++;
if(ar[i]>='a' && ar[i]<='z')
low++;

char a=ar[i];
if(a=='a' || a=='A')
vow[0]++;
if(a=='e' || a=='E')
vow[1]++;
if(a=='i' || a=='I')
vow[2]++;
if(a=='o' || a=='O')
vow[3]++;
if(a=='U' || a=='u')
vow[4]++;

}
cout<<"no of uppercase letters are: "<<up<<endl;
cout<<"no of lowercase letters are: "<<low<<endl;

cout<<"Vowel frequency is: "<<endl;
cout<<"a : "<<vow[0]<<endl;
cout<<"e : "<<vow[1]<<endl;
cout<<"i : "<<vow[2]<<endl;
cout<<"o : "<<vow[3]<<endl;
cout<<"u : "<<vow[4]<<endl;


return 0;
}
