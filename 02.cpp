/*题目：背包问题
书包总体积为8； 
4个物体分别对应的体积为：2，3，4，5；
4个物体分别对应的价值为：3，4，5，6； */ 
#include<bits/stdc++.h>
using namespace std;
int a1[5]={0,2,3,4,5};
int a2[5]={0,3,4,5,6};
int arr[5][9];

int main(){
	for(int i=0;i<5;i++){
		for(int j=0;j<9;j++){
			arr[i][j]=0;
		}
	}
	for(int i=0;i<5;i++){
		for(int j=0;j<9;j++){
			if(a1[i]==j){
//				cout<<"a1[i]==j "<<i<<" "<<j<<endl; 
				arr[i][j]=a2[i];
				if(arr[i][j]<arr[i-1][j]) arr[i][j]=arr[i-1][j]; 
			} 
			else if(a1[i]>j){
//				cout<<"a1[i]>j "<<i<<" "<<j<<endl;
				arr[i][j]=arr[i-1][j];
			}
			else if(a1[i]<j){
				if(arr[i][j-a1[i]]==arr[i-1][j-a1[i]]){
//					cout<<"a1[i]<j "<<i<<" "<<j<<endl;
					arr[i][j]=a2[i]+arr[i][j-a1[i]];
					if(arr[i][j]<arr[i-1][j]) arr[i][j]=arr[i-1][j]; 
				}
				else arr[i][j]=arr[i][j-1];
			}
		}
	}
	
	for(int i=0;i<5;i++){
		for(int j=0;j<9;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
}
