#include <iostream>
using namespace std;



int main()
 {
    int sum=0;
 int row;
  int col;
    
cout<<"Enter Rows and Columns for matrix"<<endl;
cin>>row;
cin>>col;

int arr[row][col];

cout<<"ENTER ELEMENTS OF ARRAY ";

for(int i=0;i<row;i++)
{
for(int j=0;j<col;j++)
{

cout<<"ENTER VALUE FOR INDEX "<<i<<" "<<j<<" "<<endl;
cin>>arr[i][j];


}

}
    
    
for(int i=0;i<row;i++)
{
for(int j=0;j<col;j++)
{

if(i%2!=0 && j%2!=0)
{

sum+=arr[i][j];
}



}
cout<<endl;
}
    cout<<"SUM IS "<<sum<<endl;
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}

