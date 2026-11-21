#include <iostream>
using namespace std;

int main() {
char array[]={'K','O','M','A','I','L',' ','R','A','Z','A'};
char a ='A';
int j=0;
for(int i=0;i<11;i++){
  cout<<array[i];
  }
 for(int i=0;i<11;i++){
  if(a==array[i])
  {
  j++;
  }
  }
  cout<<endl<<"Number of A's in my Name are "<<j<<endl;
     
return 0;
}

