#include<iostream>
using namespace std;
int main(){
//Muhammad Arslan 23i-0572_A

double temperature;

// Input temperature in centigrade
cout<<"Enter temperature in centigrade: ";
cin>>temperature;

// Determine the range using a boolean variable
bool isVeryHot = (temperature >= 40);
bool isHot = (!isVeryHot && temperature >= 30);
bool isNormal = (!isVeryHot && !isHot && temperature >= 20);
bool isCold = (!isVeryHot && !isHot && !isNormal && temperature >= 10);
bool isVeryCold = (!isVeryHot && !isHot && !isNormal && !isCold && temperature <= 0);


switch (isVeryHot) {
case true:
cout<<"Very Hot\n";
break;

case false:
switch (isHot){
case true:
cout<<"The temperature is hot"<<endl;
case false:
switch(isNormal){
case true:
cout<<"The temperature is Normal"<<endl;
case false:
switch(isCold){
case true:
cout<<"The temperature is Cold"<<endl;
case false:
switch(isVeryCold){
case true:
cout<<"The temperature is very cold"<<endl;
}
}
}
}
}
return 0;
}

