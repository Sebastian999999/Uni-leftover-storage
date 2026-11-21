# include <iostream>
using namespace std;

int main (){
int r,c;
cout<<"Enter the number of columns "<<endl;
cin>>c;
cout<<"Enter the number of rows "<<endl;
cin>>r;
int arr[c][r];
for (int i =0;i<r;i++){
for (int j =0;j<c;j++){
cin>>arr[i][j];
}
}
cout<<"Matrix "<<endl;
for (int i =0;i<r;i++){
for (int j =0;j<c;j++){
cout<<arr[i][j]<<' ';

}
cout<<endl;

}

for (int i =0;i<r;i++){
for (int j =0;j<c;j++){
arr[i][j]=arr[j][i];

}


}
cout<<"The transpose is :"<<endl;
for (int i =0;i<c;i++){
for (int j =0;j<r;j++){
cout<<arr[i][j]<<' ';

}
cout<<endl;

}












return 0;
}
