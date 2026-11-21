#include<iostream>
using namespace std;
int main()
{
char f;
cout<<"Enter the character :";
cin>>f;

                    switch(f>=65 && f<=90)
                   {  
                              case true:
                              cout<<"It is a UPPER-CASE CHARACTER\n";
                              break;
                              case false:
                                    switch(f>=48 &&f<=57)
                                    {
                                                case true:
                                                cout<<"It is a digit \n";
                                                break;
                                                case false :
                                                        switch(f>=97 &&f<=122)
                                                        {
                                                                    case true :
                                                                    cout<<"It is a LOWER-CASE CHARACTER\n";
                                                                    break;
                                                                    default :
                                                                    cout<<"invalid\n" ;
                                                                    break;
                                                        }
                                    }
                     }
}
