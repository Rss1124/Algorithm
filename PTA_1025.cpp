#include<bits/stdc++.h>
using namespace std;
#define MAXSIZE 100005

typedef struct{
	int now; //结点当前地址 
	int next; //结点的下一个地址 
	int data; 
}Point;
int address,num,flag; //address:首地址、num:结点总个数、flag:需要反转的结点个数
Point arr[MAXSIZE];
Point p[MAXSIZE];

void create(Point *arr){
	int flag1=num-1;
	while(flag1!=num){
		
	}
}

int main(){
	cin>>address>>num>>flag;
	int num1,num2,num3;
	for(int i=0;i<num;i++){
		cin>>num1>>num2>>num3;
		arr[i].now=num1;
		arr[i].data=num2;
		arr[i].next=num3;
		if(num1==address){
			p[0].now=num1;
			p[0].data=num2;
			p[0].next=num3;
		}
	} 
	cout<<endl;
	for(int i=0;i<num;i++){
		printf("%05d ",arr[i].now); //不足5位，在左侧补零
		printf("%d ",arr[i].data);
		if(arr[i].next==-1) cout<<-1<<endl;
		else printf("%05d\n",arr[i].next);
	} 
}
