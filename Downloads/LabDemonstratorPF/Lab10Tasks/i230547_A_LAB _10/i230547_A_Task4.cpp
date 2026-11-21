#include<iostream>

#include<cmath>

using namespace std;

int main()
{

        double space[2][3][3]={ 
        
                   {{1,2,3}, 
                   {4,5,6}, 
                   {7,8,9}
                   },
                   {
                   {2,5,3},
                   {4,5,6},
                   {7,8,5}
                   }};
                   
         for(int i=0;i<2;i++)
         
        {
        
        cout<<"set"<<i + 1<<endl;
        
      
        double totaldistance=0.0;
      
      
        for(int j=0;j<3;j++)
        
        {
        for(int k=j +1;k<3; k++)
        
      
         {
      
        double distance=sqrt(pow(space[i][j][0] - space[i][k][0],2)+
                              pow(space[i][j][1] - space[i][k][1],2)+
                              pow(space[i][j][2] - space[i][k][2],2));

        totaldistance += distance;
      
       cout<<" distance between points "<< j+1<< "and"<< k+1 <<" :" <<distance<<endl;
      
       }
      
       }
      
       cout<<"average distance of all points in the set "<< i+1 <<" :"<< totaldistance/3<<endl;
      
      }
      
      return 0;
      }
      
      
