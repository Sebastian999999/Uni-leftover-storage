#include <iostream>
using namespace std;

int main() {
    int arr[5]; 
    int smallest, largest; 
    cout << "Enter " << 5 << " integers:" << endl;
    for (int i=0;i<5;i++) {
        cin>>arr[i];
    }
    smallest=largest=arr[0];
    for (int i=1;i<5;i++) {
        if (arr[i]<smallest) {
            smallest = arr[i];
        }
        if (arr[i]>largest) {
            largest=arr[i];
        }
    }
    cout<<"Smallest element: "<<smallest<<endl;
    cout<<"Largest element: "<<largest<<endl;

    return 0;
}

