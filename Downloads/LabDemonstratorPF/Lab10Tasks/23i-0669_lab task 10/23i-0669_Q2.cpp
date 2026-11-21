# include <iostream>
# include <ctime>
# include <cstdlib>
using namespace std;

int main (){
int arr[3][3];
int arr1[3][3];
srand (time(0));
cout<<"Enter Elements of Array 1 "<<endl;
for (int i =0;i<3;i++){
for (int j =0;j<3;j++){
cin>>arr[i][j];
}
}
cout<<"Enter Elements of Array 2 "<<endl;
for (int i =0;i<3;i++){
for (int j =0;j<3;j++){
cin>>arr1[i][j];
}
}
cout<<"Matrix A "<<endl;
for (int i =0;i<3;i++){
for (int j =0;j<3;j++){
cout<<arr[i][j]<<' ';

}
cout<<endl;

}
cout<<"Matrix B "<<endl;
for (int i =0;i<3;i++){
for (int j =0;j<3;j++){
cout<<arr1[i][j]<<' ';

}
cout<<endl;

}
int r[3][3]={0};

for (int i =0;i<3;i++){
for (int j =0;j<3;j++){
for (int k=0;k<3;k++){
 r[i][j]+= arr[i][k]*arr1[k][j];
    
  }
  }
  }
  cout<<"After Multiplication "<<endl;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout << r[i][j] << ' ';
        }
        cout << endl;
    }
    
 





return 0;
}
