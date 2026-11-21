#include<iostream>
using namespace std;
int main()
{

int ar[5];
int n;
cout<<"Enter 5 numbers (1-9)"<<endl;
for(int i=0;i<5;i++)
{
cout<<"Enter number "<<(i+1)<<" "<<endl;
cin>>ar[i];

while(ar[i]<1 || ar[i]>9)
{
cout<<"Please enter a valid number"<<endl;
cin>>ar[i];

}

cout<<endl;

}

cout<<"For checking whether a number is present in array or not, enter a number"<<endl;
cin>>n;
bool p=false;
for(int i=0;i<5;i++)
{
if(ar[i]==n){
p=true;
break;
}
}
if(p)
{
cout<<"Present"<<endl;
}
else{
cout<<"NOT PRESENT"<<endl;
}

return 0;
}
