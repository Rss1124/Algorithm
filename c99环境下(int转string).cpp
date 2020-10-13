#include<bits/stdc++.h>
using namespace std;
//char *itoa( int value, char *string,int radix);
// 原型说明：
// value：欲转换的数据。
// string：目标字符串的地址。
// radix：转换后的进制数，可以是10进制、16进制等。
// 返回指向string这个字符串的指针
int main(){
	for(int i=999995;i<=999999;i++)
	{
		char c[6];
		itoa(i,c,10);
		cout<<c<<endl;	
	}
}
