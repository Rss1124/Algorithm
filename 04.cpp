/*��Ŀ��ͨ���ݹ��ҳ�����arry������ֵ*/ 
#include<bits/stdc++.h>
using namespace std;
int arry[6]={1,7,5,9,6,8};
int flag;
int max;
int fun(int *arr,int f){
//	cout<<f<<endl;
	if(f==0){              //�ݹ���� 
		return arr[0];
	}
	else if(arr[f]>fun(arr,f-1)){
//		cout<<"arr[f]>fun(arr,f-1)"<<" "<<arr[f]<<endl;
		return arr[f];
	}
	else if(arr[f]<fun(arr,f-1)){
//		cout<<"arr[f]<fun(arr,f-1)"<<" "<<arr[f]<<endl;
		return fun(arr,f-1);
	}
} 

int main(){
	cin>>flag;
	cout<<"max="<<fun(arry,flag);
} 
