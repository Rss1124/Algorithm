/*��Ŀ����ȫ���� (һ��������Է����޴Σ�ֻҪʣ��ռ乻��) 
��������Ϊ10�� 
4������ֱ��Ӧ�����Ϊ��2��3��4��5��
4������ֱ��Ӧ�ļ�ֵΪ��3��4��5��6�� */ 
#include<bits/stdc++.h>
using namespace std;
int a1[5]={0,2,3,4,7}; //������� 
int a2[5]={0,1,3,5,9}; //�����ֵ 
int arr[5][11];

int main(){
	for(int i=0;i<5;i++){
		for(int j=0;j<11;j++){
			arr[i][j]=0;
		}
	}
	for(int i=0;i<5;i++){
		for(int j=0;j<11;j++){
			if(a1[i]==j){
//				cout<<"a1[i]==j "<<i<<" "<<j<<endl; 
				arr[i][j]=a2[i];
				if(arr[i][j]<arr[i-1][j]) arr[i][j]=arr[i-1][j]; 
			} 
			else if(a1[i]>j){
//				cout<<"a1[i]>j "<<i<<" "<<j<<endl;
				arr[i][j]=arr[i-1][j];
			}
			/*0-1��������ȫ�����Ĳ�֮ͬ��*/ 
			else if(a1[i]<j&&i>0){
//				cout<<"a1[i]<j "<<i<<" "<<j<<endl;
				arr[i][j]=a2[i]+arr[i][j-a1[i]];
				if(arr[i][j]<arr[i-1][j]) arr[i][j]=arr[i-1][j]; 
			}
			else arr[i][j]=arr[i][j-1];
		}
	}
	
	for(int i=0;i<5;i++){
		for(int j=0;j<11;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
}
