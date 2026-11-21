
#include <iostream>
using namespace std;
int main() {
    int num[5],sq[5],rev[5];
    cout << "Enter 5 integers:"<<endl;
    for (int i=0; i<5; i++) {
        cin>>num[i];
        sq[i]=num[i]*num[i];
    }
    for (int i=0, j=5-1;i<5;i++,j--) {
        rev[j] = num[i];
    }
    cout<<"Original array:"<<endl;
    for (int i=0;i<5;i++) {
        cout<<num[i]<<" ";
    }
    cout<<endl;

    cout<<"Squares array: "<<endl;
    for (int i=0;i<5;i++) {
        cout<<sq[i]<<" ";
    }
    cout << endl;
    cout << "Reversed array: "<<endl;
    for (int i=0; i<5;i++) {
        cout << rev[i] << " ";
    }
    cout << endl;

    return 0;
}
