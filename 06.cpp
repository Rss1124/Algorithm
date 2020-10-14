/*题目一个正整数如果任何一个数位不大于右边相邻的数位，则称为一个数位递增的数，例如1135是一个数位递增的数，而1024不是一个数位递增的数。
给定正整数 n，请问在整数 1 至 n 中有多少个数位递增的数？*/ 
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
