#include<bits/stdc++.h>
using namespace std;
string str,mstr,Enum;
stringstream ss;
char flag;
int fnum,pnum; 

void get(string str){ //��ȡEǰ��Ĳ������ŵ��ַ���mstr,��ȡָ�����������fnum,��ȡ���ҷ���flag,��ȡС�����λ��pnum 
	int i=1;
	for(i;str[i]!='E';i++){
		if(str[i]=='.') pnum=i-1;
		mstr+=str[i];
	}
	i++;
	flag=str[i++];
	for(i;i<str.length();i++){
		Enum+=str[i];
	}
}
void right(string mstr){ //���E�������'+',��ʾС����������
	int flag=fnum; 
	for(int i=pnum;i<mstr.length();i++){
		if(i!=pnum+fnum) str[i]=str[i+1]; //��С������������ǰ��,ֱ�������µ�С�����λ��pnum+fnum 
		else if(i==pnum+fnum){
			mstr[i]='.';
			if(flag==0) break;
		}
		flag--;
	}
	if(flag==0) mstr[pnum+fnum]='.';
	else
}
void left(string mstr){ //���E�������'-',��ʾС���������� 
}

int main(){
	cin>>str;
	get(str);
	ss<<Enum;
	ss>>fnum;
	ss.clear();
	cout<<"mstr:"<<mstr<<endl;
	cout<<"flag:"<<flag<<endl;
	cout<<"fnum:"<<fnum<<endl;
	cout<<"pnum:"<<pnum;
} 
