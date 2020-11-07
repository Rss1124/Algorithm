#include<bits/stdc++.h>
using namespace std;
string str,mstr,Enum;
stringstream ss;
char flag;
int fnum,pnum; 

void get(string str){ //获取E前面的不含符号的字符串mstr,获取指数后面的数字fnum,获取左右符号flag,获取小数点的位置pnum 
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
void right(string mstr){ //如果E后面的是'+',表示小数点往右移
	int flag=fnum; 
	for(int i=pnum;i<mstr.length();i++){
		if(i!=pnum+fnum) str[i]=str[i+1]; //将小数点后的数字往前移,直到到达新的小数点的位置pnum+fnum 
		else if(i==pnum+fnum){
			mstr[i]='.';
			if(flag==0) break;
		}
		flag--;
	}
	if(flag==0) mstr[pnum+fnum]='.';
	else
}
void left(string mstr){ //如果E后面的是'-',表示小数点往左移 
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
