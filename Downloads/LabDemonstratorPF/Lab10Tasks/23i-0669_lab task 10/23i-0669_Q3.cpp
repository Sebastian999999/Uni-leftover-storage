# include <iostream>
using namespace std;

int main (){
int arr[5][5];
for (int i =0;i<5;i++){
for (int j=0;j<5;j++){
cin>>arr[i][j];
}
}
cout<<"Matrix "<<endl;
for (int i =0;i<5;i++){
for (int j=0;j<5;j++){
cout<<arr[i][j];
}
cout<<endl;
}
int s=0;
for (int i =0;i<5;i++){
for (int j=0;j<5;j++){
if (i %2==1 && j%2==1){
s=arr[i][j]+s;
}

}
}
cout<<s;













return 0;
}
