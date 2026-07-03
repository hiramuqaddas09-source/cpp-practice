#include<iostream>
using namespace std;
int main(){
	int arr[4][4] = {{2,4,5,6},{8,10,1,3},{2,4,6,8},{13,43, 2,78}};
	int dsum=0;
	int asum=0;
	for(int i = 0; i<4; i++){
		for(int j= 0; j<4; j++){
			if(i==j)
			dsum += arr[i][j];
		}
	}
	cout<<dsum<<endl;
	int j = 3;
	for(int i= 0; i<4; i++){
		asum += arr[i][j];
		j--;
	}
	cout<<asum<<endl;
	
	int adif = dsum - asum;
	cout<<adif;
	
	
	
}
