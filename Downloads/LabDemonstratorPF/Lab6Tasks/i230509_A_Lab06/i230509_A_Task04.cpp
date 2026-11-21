#include<iostream>
using namespace std;
int main()
{
    int temp;
    cout<<"Please enter the temperature in the centrigrade(C): "<<endl;
    cin>>temp;
    switch(temp>=40)
    {
        case 1:
        cout<<"Very hot"<<endl;
        break;
        case 0:
            switch(temp>=30 && temp<40)
            {
                case 1:
                cout<<"Hot"<<endl;
                break;
                case 0:
                    switch(temp>=20 && temp<40)
                    {
                        case 1:
                        cout<<"Normal"<<endl;
                        break;
                        case 0:
                             switch(temp>=10 && temp<20)
                            {
                                case 1:
                                cout<<"Cold"<<endl;
                                break;
                                case 0:
                                     switch(temp>=0 && temp<10)
                                    {
                                        case 1:
                                        cout<<"Very cold"<<endl;
                                        break;
                                        case 0:
                                             switch(temp<0)
                                                    {
                                                        case 1:
                                                        cout<<"Freezing"<<endl;
                                                        break;
                                                        case 0:
                                                             switch(temp>100)
                                                                {
                                                                    case 1:
                                                                    cout<<"Invalid input"<<endl;
                                                                    break;
                                                                    case 0:
                                                                        break;
                                                                        
                                                                }
                                                            
                                                    }
                                                                            
                                    }
                                    
                            }
                                
                    }
            }
    }
    return 0;
}
