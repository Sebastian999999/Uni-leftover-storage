#include <iostream>
using namespace std;

bool perfect(int num)
{
int sum =0;
for(int i=1;i<num; i++){
if(num % i==0){
sum+=i;
}
}
return sum==num;
}
int main()
{
for(int i=1; i<1000; i++)
{
if(perfect(i)){
cout<<i<<" is a perfect number."<<endl;
}
}

return 0;
}
