/*��Ŀһ������������κ�һ����λ�������ұ����ڵ���λ�����Ϊһ����λ��������������1135��һ����λ������������1024����һ����λ����������
���������� n������������ 1 �� n ���ж��ٸ���λ����������*/ 
#include<bits/stdc++.h>
using namespace std;
int n;
int flag=0;

bool check(int num){
	if(num<=9) return true;
	else if(num==1000000) return false;
	else{
		char a[6];
		itoa(num,a,10);
		if(num>=10&&num<=99){
			if(a[0]>a[1]) return false;
			else return true;
		}
		else if(num>=100&&num<=999){
			if(a[0]>a[1]||a[1]>a[2]) return false;
			else return true;
		}
		else if(num>=1000&&num<=9999){
			if(a[0]>a[1]||a[1]>a[2]||a[2]>a[3]) return false;
			else return true;
		}
		else if(num>=10000&&num<=99999){
			if(a[0]>a[1]||a[1]>a[2]||a[2]>a[3]||a[3]>a[4]) return false;
			else return true;
		}
		else if(num>=100000&&num<=999999){
			if(a[0]>a[1]||a[1]>a[2]||a[2]>a[3]||a[3]>a[4]||a[4]>a[5]) return false;
			else return true;
		}
	}
}



int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		if(check(i)==true) flag++;
	}
	cout<<flag;
}
