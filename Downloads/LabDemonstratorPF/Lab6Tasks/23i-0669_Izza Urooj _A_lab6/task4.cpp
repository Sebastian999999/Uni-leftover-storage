# include <iostream>
using namespace std;

int main ()
{
int t;
cout <<"Enter the temperature " <<endl;
cin>>t;
int t1 = (t >=40 );
int t2 = (t>= 30 && t <= 40) ;
int t3 = (t>= 20 && t <= 30);
int t4 = (t>=10 && t <=20);
int t5 = (t>= 0 && t <= 10);
int t6 = (t<0);

switch (t1) {
case 1 :
cout<< "Very hot ";
break;
case 0 :
switch (t2){
case 1 :
cout<<"Hot ";
break;
case 0 :
switch (t3){
case 1 :
cout<<"Normal ";
break;
case 0 :
switch (t4) {
case 1 :
cout<<"Cold ";
break ;
case 0 :
switch (t5){
case 1 :
cout<< "Very cold ";
break;
case 0 :
switch (t6){

case 1 :
cout<<"Freezing ";
break;
default :
cout<< "Invalid ";
}
}
}

}
}
}
return 0 ;}



