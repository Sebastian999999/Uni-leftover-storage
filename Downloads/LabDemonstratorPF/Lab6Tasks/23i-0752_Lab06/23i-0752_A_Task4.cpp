// Name: Abdul Mateen    Roll no: 23i-0752
#include<iostream>
using namespace std;

int main(){

    int temp;
    cout<<"Enter the temperature in centigrade ";
    cin>>temp;

    temp/=10;

    switch(temp){
        case 10:
        case 9:
        case 8:
        case 7:
        case 6:
        case 5:
        case 4:
        cout<<"Very hot";
        break;
        case 3:
        cout<<"Hot";
        break;
        case 2:
        cout<<"Normal";
        break;
        case 1:
        cout<<"Cold";
        break;
        case 0:
        cout<<"Very Cold";
        break;
        default:
        switch(temp>10){
            case 1:
            cout<<"Very Hot";
            break;
            case 0:
            cout<<"Freezing";
            break;
        }
    }
    return 0;
}