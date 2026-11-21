#include<iostream>
using namespace std;
int main()
{
 int arr[5]={0};
 int num=0, num2=0;
 bool flag=0;
 cout<<"Enter five integers from to 9:\n";
 for (int i=0;i<5;i++)
    {
     cin>>num;
     if (num<1 || num>9)
        cout<<"Error";
     arr[i]=num;  
    } 
 cout<<"Enter a number:";
 cin>>num2;
 for (int i=0;i<5;i++)
     {
      if (arr[i]==num2)
          flag=1;
      else
          continue;    
     }    
     if (flag==1)
        cout<<"The number"<<" "<<num2<<" "<<"is present in the array\n"; 
     else 
        cout<<"The number you entered is not present in the array\n";        
 return 0;
}
