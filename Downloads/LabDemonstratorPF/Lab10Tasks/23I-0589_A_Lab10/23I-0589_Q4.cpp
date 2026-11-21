#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int arr[2][3][3];
	int sum;
	double dis,distance=0;
	
	for(int i=0;i<2;i++){
		cout<<"Array "<<i+1<<": "<<endl;
		for(int j=0;j<3;j++){
			for(int k=0;k<3;k++){
				cin>>arr[i][j][k];
			}
		}
	}		
	int count=0;
	for(int i=0;i<2;i++){
		
		for(int j=0;j<3;j++){
			for(int k=j+1;k<3;k++){
				int x1= arr[i][j][0], y1 =arr[i][j][1] ,  z1 = arr[i][j][2];
				int x2= arr[i][k][0], y2 =arr[i][k][1] ,  z2 = arr[i][k][2];
				
				dis= sqrt(pow(x2-x1,2)+pow(y2-y1,2)+pow(z2-z1,2)) ;
				distance+=dis;
				count++;	
				
			}

		}
		double average=distance/count;
		cout<<"Average Distance set"<< i+1<<": "<<average<<endl;
		count=0;
		distance=0;
	}
	
	
	return 0;
}
