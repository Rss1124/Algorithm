#include<bits/stdc++.h>
using namespace std;

int num1,num2,num,n;

void dfs(int num){
	if(num%n!=num){
		dfs(num/n);
		cout<<num%n;
	}
	else cout<<num;
}

int main(){
	cin>>num1>>num2>>n;
	num=num1+num2;
	dfs(num);
} 
