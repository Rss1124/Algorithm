#include<bits/stdc++.h>
using namespace std;
int linear_arr[6]={1,2,3,4,5,6};
int dimensional_arr[3][3]={1,2,3,4,5,6,7,8,9};

void pointer(){
	int a=3;
	int *p; //*：解引用运算符 
	p=&a; //&：取地址运算符 
	cout<<"p的地址：&p="<<&p<<endl;
	cout<<"a的地址：&a="<<p<<endl;
	cout<<"指针p指向的值：*p="<<*p<<endl;
}

void linear_array(int *array){
	cout<<(int *)array+2<<endl; //输出数组第三个元素的地址 
	cout<<*((int *)array+2); //*((int *)array+2)==array[2]; 
}

//"二维数组"可以理解为"一维数组"中嵌套了一个"一维数组"
void dimensional_array(int **array){
	cout<<(int *)array+1<<endl; //输出二维数组第二个元素的地址 
	cout<<*((int *)array+1); //输出二维数组第二个元素的具体值
}

int main(){
//	pointer(); //指针练习 
	linear_array(linear_arr); //一维数组 
//	dimensional_array((int **)dimensional_arr); //二维数组 
} 
