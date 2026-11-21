#include<iostream>
using namespace std;

int main()
{
    char name[]= "Raffay";
    int size;
    int count=0;

    size=sizeof(name);

    
    cout<<"Your name is "<< name <<"." << endl;
    

    for(int i=1; i<=(size-1) ; i++)
    {
        if(name[i]=='a')
        {
            count++;
        }
    }

    cout<<"There are a total of "<< count << " a's in your name." << endl;

    
}