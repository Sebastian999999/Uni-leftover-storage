#include<iostream>
using namespace std;

int main(){
cout<<"THe name is : \"Hamna\""<<endl;
const int size=5;
char arrname[size] = {'h', 'a', 'm', 'n', 'a'}; 
int count=0;

for(int i=0;i<5;i++)
{
	if(arrname[i]=='a')
	count++;

}

cout<<"The number of a's in the name are= "<<count<<endl;

return 0;
}
