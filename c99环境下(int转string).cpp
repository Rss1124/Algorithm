#include<bits/stdc++.h>
using namespace std;
//char *itoa( int value, char *string,int radix);
// ԭ��˵����
// value����ת�������ݡ�
// string��Ŀ���ַ����ĵ�ַ��
// radix��ת����Ľ�������������10���ơ�16���Ƶȡ�
// ����ָ��string����ַ�����ָ��
int main(){
	for(int i=999995;i<=999999;i++)
	{
		char c[6];
		itoa(i,c,10);
		cout<<c<<endl;	
	}
}
