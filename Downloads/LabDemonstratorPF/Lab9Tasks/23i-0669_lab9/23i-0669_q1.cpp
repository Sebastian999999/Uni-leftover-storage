# include <iostream>
using namespace std;
int main ()
{
const int size =5;
int arr [size];
for (int i = 0 ;i<5;i++){
cout<<"enter numbers for array "<<endl;
cin>>arr[i];
}
int n ;
bool r=0;
for (int i = 0 ;i<5;i++){
if (arr[i] >=1 && arr[i]<=9){
r=1;
break;
}
}
if (r){
cout<<"enter a number ";
cin>>n;


bool f=0;
for (int i =0;i<5;i++){
if (arr[i]==n){
f=1;
break;}
}

if (f){
cout<<"number is  present ";}
else {
cout<<"not present";
}
}

else {
cout<<"invalid";}

return 0 ;

}
