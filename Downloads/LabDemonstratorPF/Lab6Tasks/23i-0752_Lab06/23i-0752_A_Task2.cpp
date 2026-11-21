// Name: Abdul Mateen    Roll no: 23i-0752
#include<iostream>
using namespace std;

int main(){

    char a;
    cin>>a;

    switch((a>='A' && a<='Z')||(a>='a' && a<='z')||(a>='0' && a<='9')){

        case 1:
        switch((a>='A' && a<='Z')){
            case 1:
            cout<<"Upper case Alphabet";
            break;
            case 0:
            switch((a>='a' && a<='z')){
                case 1:
                cout<<"Lower case alphabet";
                break;
                case 0:
                cout<<"Digit";
                break;
            }
            break;
        }
        break;
        case 0:
        cout<<"Invalid number";
        break;
    }
}