#include<bits/stdc++.h>
using namespace std;
string str,mstr,Enum,lstr,rstr;
stringstream ss;
char flag;
int fnum,pnum,flag1=0; 

void get(string str){ //��ȡEǰ��Ĳ������ŵ��ַ���mstr,��ȡָ�����������fnum,��ȡ���ҷ���flag,��ȡС�����λ��pnum 
	int i=1;
	for(i;str[i]!='E';i++){
		if(flag1==0&&str[i]!='.') lstr+=str[i];
		if(str[i]=='.'){
			i=i+1;
			flag1=1;
		}
		if(flag1==1) rstr+=str[i];
	}
	i++;
	flag=str[i++];
	for(i;i<str.length();i++){
		Enum+=str[i];
	}
}
void right(){ //���E�������'+',��ʾС����������,��rstr 
	if(str[0]=='-') cout<<'-';
	cout<<lstr; //ֱ�����lstr 
	if(fnum<=rstr.length()){
		for(int i=0;i<rstr.length();i++){
			if(i==fnum) cout<<'.';
			cout<<rstr[i];
		}	 		
	}
	else if(fnum>rstr.length()){
		cout<<rstr;
		fnum=fnum-rstr.length();
		while(fnum!=0){
			cout<<0;
			fnum--;
		}
	}
}
void left(){ //���E�������'-',��ʾС����������,��lstr 
	if(str[0]=='-') cout<<'-';
	if(fnum<lstr.length()){
		for(int i=0;i<lstr.length();i++){
			if(i==lstr.length()-fnum) cout<<'.';
			cout<<lstr[i];
		}
	}
	else if(fnum>=lstr.length()){
		int num=fnum-lstr.length();
		cout<<"0.";		
		while(num!=0){
			cout<<0;
			num--;
		}
		cout<<lstr;
	}
	cout<<rstr;	
}

int main(){
	cin>>str;
	get(str);
	ss<<Enum;
	ss>>fnum;
	ss.clear();
//	cout<<"lstr:"<<lstr<<endl;
//	cout<<"rstr:"<<rstr<<endl;
//	cout<<"flag:"<<flag<<endl;
//	cout<<"fnum:"<<fnum<<endl;
//	cout<<"pnum:"<<pnum;
	if(flag=='+') right();
	else left();
} 
