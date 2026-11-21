#include<iostream>
using namespace std;
int main(){
float a;
cout<<"enter the temp in centigrades:";
cin>>a;
switch(a>=40 && a<=100){
case 1:
cout<<"very hot";
break;
}
switch(a>=30 && a<=40){
case 1:
cout<<"hot";
break;
}
switch(a>=20 && a<=30){
case 1:
cout<<"normal";
break;
}
switch(a>=10 && a<=20){
case 1:
cout<<"cold";
break;
}
switch(a>=0 && a<=10){
case 1:
cout<<"very cold";
break;
}
switch(a<0 && a>=-100){
case 1:
cout<<"freezing";
break;
}
switch(a>100 || a<-100){
case 1:
cout<<"invalid input";
}
return 0;
}
