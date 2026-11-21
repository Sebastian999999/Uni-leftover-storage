# include <iostream>
# include <ctime>
# include <cstdlib>
using namespace std;

int main (){
int arr[5][5];
srand (time(0));
for (int i =0;i<5;i++){
for (int j =0;j<5;j++){
arr[i][j]=(rand()%100)+1;
}
}

cout<<"Matrix "<<endl;
for (int i =0;i<5;i++){
for (int j =0;j<5;j++){
cout<<arr[i][j]<<' ';

}
cout<<endl;

}

cout<<"Reversed Array :"<<endl;

for (int i =4;i>=0;i--){
for (int j =4;j>=0;j--){
cout<<arr[i][j]<<' ';

}
cout<<endl;

}













return 0;
}
