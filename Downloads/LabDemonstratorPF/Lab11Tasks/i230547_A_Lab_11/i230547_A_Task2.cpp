#include<iostream>

#include<cstdlib>

#include<ctime>

using namespace std;

int flip();
        
int main()

{

           const int numtosses=100;

           int headscount=0;

           int tailscount=0;

           srand(static_cast<unsigned int>(time(0)));

           for(int i=0;i<numtosses;++i)
           
           {

           int result=flip();

           if(result==0)
           
           {

           cout<<"Tails"<<endl;

           ++tailscount;

            }
            
          else{

          cout<<"Heads"<<endl;

          ++headscount;

          }

          }


          cout<<" Result after "<<numtosses<<" coin tosses: "<<endl;

          cout<<"Headscount: "<<headscount<<endl;

          cout<<" Tailsscount: "<<tailscount<<endl;


          return 0;
 
          }


         int flip()
        {

        return rand()%2;
        
}


