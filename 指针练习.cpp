#include<bits/stdc++.h>
using namespace std;
int linear_arr[6]={1,2,3,4,5,6};
int dimensional_arr[3][3]={1,2,3,4,5,6,7,8,9};

void pointer(){
	int a=3;
	int *p; //*������������� 
	p=&a; //&��ȡ��ַ����� 
	cout<<"p�ĵ�ַ��&p="<<&p<<endl;
	cout<<"a�ĵ�ַ��&a="<<p<<endl;
	cout<<"ָ��pָ���ֵ��*p="<<*p<<endl;
}

void linear_array(int *array){
	cout<<(int *)array+2<<endl; //������������Ԫ�صĵ�ַ 
	cout<<*((int *)array+2); //*((int *)array+2)==array[2]; 
}

//"��ά����"�������Ϊ"һά����"��Ƕ����һ��"һά����"
void dimensional_array(int **array){
	cout<<(int *)array+1<<endl; //�����ά����ڶ���Ԫ�صĵ�ַ 
	cout<<*((int *)array+1); //�����ά����ڶ���Ԫ�صľ���ֵ
}

int main(){
//	pointer(); //ָ����ϰ 
	linear_array(linear_arr); //һά���� 
//	dimensional_array((int **)dimensional_arr); //��ά���� 
} 
