#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int flip(){
    //random function should give only one or zero
   

    
int x=rand()%2;
return x;


}


int main(){
////////////MASAB TAHIR 23I-0006 A
    srand(time(0));
    int heads=0;
    int tails=0;


    for(int i=0;i<100;++i)
{

flip();




 
    if(flip()==0){
   
     heads++;
}
else if(flip()==1){
    
     tails++;
}
}

    cout<<"heads"<<heads<<"\ntails"<<tails<<endl;


return 0;
}
