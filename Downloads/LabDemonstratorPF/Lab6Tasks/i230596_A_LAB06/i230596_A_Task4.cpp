#include<iostream>
using namespace std;
int main()
{
int f;
cout<<"Enter the temperature :";
cin>>f;
                      switch(f>=40 && f<=100)
                      {  
                                case true:
                                cout<<"VERY HOT\n";
                                break;
                                case false:
                                  switch(f>=30 && f<=40)
                                  {
                                            case true:
                                            cout<<"HOT\n";
                                            break;
                                            case false :
                                                switch(f>=20 && f<=30)
                                                {
                                                          case true :
                                                          cout<<"NORMAL\n";
                                                          break;
                                                          case false :
                                                              switch(f>=10 && f<=20)
                                                              {
                                                                        case true :
                                                                        cout<<"cold\n";
                                                                        break;
                                                                        case false :
                                                                            switch(f>=0 && f<=10)
                                                                            {
                                                                                      case true :
                                                                                      cout<<"Very cold\n";
                                                                                      break;
                                                                                      case false :
                                                                                          switch(f<0 && f>=-100)
                                                                                          {
                                                                                                    case true :
                                                                                                    cout<<"Freezing\n";
                                                                                                    break;
                                                                                                    default :
                                                                                                    cout<<"Invalid input"<<endl;
                                                                                          } 
                                                                             } 
                                                              }
                                              }
                              }   
              }
}
