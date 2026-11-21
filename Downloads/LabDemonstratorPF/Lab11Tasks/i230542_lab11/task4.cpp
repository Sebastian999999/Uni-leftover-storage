#include <iostream>
using namespace std;

int qualityPoints(int average)
{
if(average>90 && average<100){
return 4;
}
else if(average>80 && average<89){
return 4;
}
else if(average>70 && average<79){
return 4;
}
else if(average>60 && average<69){
return 4;
}
else
{
return 0;
}
}

int main()
{
int average;
cout<<"Enter average:";
cin>>average;

int result = qualityPoints(average);

cout<<"Result:"<<result<<endl;
return 0;
}
