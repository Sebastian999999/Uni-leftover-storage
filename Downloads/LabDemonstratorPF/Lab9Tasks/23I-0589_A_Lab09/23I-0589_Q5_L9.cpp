
#include <iostream>
using namespace std;

int main() {
    int arr[5];
    int size = sizeof(arr) / sizeof(arr[0]);
    int sumMSD = 0;
	cout<<"Enter the elements of an array:";
	for(int i=0;i<5;i++){
		cin>>arr[i];
	}
    for (int i = 0; i < size; i++) {
        int num = arr[i];
        while (num >= 10) {
            num /= 10;
        }
            sumMSD += num;
    }
    cout << "Input: [";
    for (int i= 0;i<size;i++) {
        cout<<arr[i];
        if (i<size - 1) {
            cout<<", ";
        }
    }
    cout<<"]"<<endl;
    cout<<"Output: "<<sumMSD<<endl;

    return 0;
}
