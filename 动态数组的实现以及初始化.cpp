#include<bits/stdc++.h> 
using namespace std;
int s;
int main(){
	/*动态生成6*s的二维数组*/ 
	cin>>s;
//	int **arr=new int*[6];
//	for(int i=0;i<6;i++){
//		arr[i]=new int[s];
//	}
//	for(int i=0;i<6;i++){
//		for(int j=0;j<s;j++){
//			arr[i][j]=0;
//		}
//	}
//	for(int i=0;i<6;i++){
//		for(int j=0;j<s;j++){
//			cout<<arr[i][j]<<" ";
//		}
//		cout<<endl;
//	}
	/*动态生成s*s的二维数组*/
	int **arr=new int*[s];
	for(int i=0;i<s;i++){
		arr[i]=new int[s];
	}
	for(int i=0;i<s;i++){
		for(int j=0;j<s;j++){
			arr[i][j]=0;
		}
	}
	for(int i=0;i<s;i++){
		for(int j=0;j<s;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}	 
		
} 
