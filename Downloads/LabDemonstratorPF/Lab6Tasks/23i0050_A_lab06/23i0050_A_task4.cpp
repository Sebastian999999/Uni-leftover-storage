#include<iostream>
using namespace std;
int main()
{ int t;
cout<<"\nEnter a temperature";
cin>>t;
switch(t>=40)
{ case 1:
cout<<"\nVery hot";
break;
 case 0:
 switch((t>=30)&&(t<40))
 {case 1:
 cout<<"\n Hot";
 break;
 case 0:
  switch((t>=20)&&(t<30))
  {
  case 1:
  cout<<"\n Normal";
  break;
   case 0:
   switch((t>=10)&&(t<20))
   {case 1:
   cout<<"Cold";
   break;
   case 0:
   switch((t>=0)&&(t<10))
   {case 1:
   cout<<"\n Very cold";
   break;
   case 0:
   cout<<"Frezzing";
   break;
   }
   }
   }
   }
   }
   return 0;
   }
   
  
 
