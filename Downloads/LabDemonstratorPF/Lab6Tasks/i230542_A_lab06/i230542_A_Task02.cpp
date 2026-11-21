#include<iostream>
using namespace std;
int main(){
int a;
char ch;
cout<<"enter the character you want to check:";
cin>>ch;
a=static_cast<int>(ch);
switch(a>=48 && a<=57){
case 1:
cout<<"its a digit";
break;
}
switch(a>=65 && a<=90){
case 1:
cout<<"its a alphabet";
break;
}
switch(a>=97 && a<=122){
case 1:
cout<<"its a alphabet";
break;
}
switch(a<48 || a>122){
case 1:
cout<<"invalid input";
break;
}
switch(a<65 && a>57){
case 1:
cout<<"invalid input";
break;
}
switch(a<97 && a>90){
case 1:
cout<<"invalid input";
break;
}
return 0;
}
