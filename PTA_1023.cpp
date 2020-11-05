#include<bits/stdc++.h>
using namespace std;

int num,top,flag;
int arr[10];
string str;

int main(){
	for(int i=0;i<10;i++){
		cin>>num;
		if(num>0&&i!=0&&flag==0){
			flag++;
			top=i;
			num=num-1;
		}
		arr[i]=num;
	}
//	for(int i=0;i<10;i++){
//		cout<<arr[i]<<" "; 
//	}
	for(int i=9;i>=0;i--){
		while(arr[i]!=0){
			str=(char)(i+'0')+str;
			arr[i]--;
		}
	}
	cout<<top<<str;
} 

