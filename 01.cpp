/*��Ŀ����֪һ������{3,34,4,12,5,2},������һ�������������ж��Ƿ��ܴ�������ճ��������֣�ʹ����֮��ǡ�õ��ڸ�������*/ 
#include<bits/stdc++.h>
using namespace std;
int flag=0;
int n,s;
int array1[6]={3,34,4,12,5,2};
/*�ݹ�*/ 
//void subset(int *arr,int f,int num){
//	if(f>=0){
//		if(num==0||num==arr[f]){
//			flag=1;
//		}
//		else if(arr[f]<=num){
//			subset(arr,f-1,num-arr[f]);
//			subset(arr,f-1,num);
//		}
//		else if(arr[f]>num) subset(arr,f-1,num);
//	}
//	else return;
//} 

int main(){
	/*��̬�滮���*/ 
	cin>>s;
	s=s+1;
	/*����mxn�ľ���*/ 
	int **arr=new int*[6];
	for(int i=0;i<6;i++){
		arr[i]=new int[s];
	}
	for(int i=0;i<6;i++){
		for(int j=0;j<s;j++){
			arr[i][j]=0;
		}
	}
	for(int i=0;i<6;i++){
		for(int j=0;j<s;j++){
//			cout<<i<<" "<<j<<endl;
			if(j==0) arr[i][j]=1;
			else{
				if(arr[i][j]==1) continue; 
				else if(i>=1&&arr[i-1][j]==1){
//					cout<<"i>=1&&arr[i-1][j]==1"<<" "<<i<<" "<<j<<endl; 
					arr[i][j]=1;
				}
				else if(array1[i]==j){
//					cout<<"array1[i]==j"<<" "<<i<<" "<<j<<endl; 
					arr[i][j]=1;
				}
				else if(array1[i]<j&&i>0){
					flag=j;
					j=j-array1[i];
					if(arr[i-1][j]==1){
//						cout<<"array1[i]<j"<<" "<<i<<" "<<j<<endl;
						arr[i][flag]=1;
					}
					else j=flag;
				}
				else continue;
			}
		}
	}
	for(int i=0;i<6;i++){
		for(int j=0;j<s;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}

/*�ݹ�*/ 
//	subset(array1,5,s);
//	if(flag==1) cout<<"yes";
//	if(flag==0) cout<<"no";
} 
