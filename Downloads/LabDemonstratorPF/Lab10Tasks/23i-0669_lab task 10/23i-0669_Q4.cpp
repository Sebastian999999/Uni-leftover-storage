
#include <iostream>
#include <cmath>
using namespace std;

int main (){
    int arr[2][3][3] = {
        { {1,2,3},{4,5,6},{7,8, 9 }},
        { {2, 5, 3}, {4, 5, 6}, {7, 8, 5 }}
    };

    double arr2[2] = {0};  

    for (int i = 0; i < 2; i++) {
        int count = 0;  
        for (int j = 0; j < 3; j++) {
            for (int k = j + 1; k < 3; k++) { //row increment 
                int sum = 0;
                for (int l = 0; l < 3; l++) {
                    int diff = arr[i][j][l] - arr[i][k][l];
                    sum += diff * diff; 
                }
                arr2[i] += sqrt(sum);
                count++;
            }
        }
        arr2[i] /= count;  
}
    cout << "Average distances between points:" << endl;
    for (int i = 0; i < 2; i++) {
        cout << arr2[i] << endl;
    }

    return 0;
}

