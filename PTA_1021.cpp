#include<bits/stdc++.h>
using namespace std;

int flag0,flag1,flag2,flag3,flag4,flag5,flag6,flag7,flag8,flag9;
int main(){
	string str; //1000位的整数无法用int输入，只有用string才能进行输入 
	cin>>str;
	for(int i=0;i<str.length();i++){
		if(str[i]=='0') flag0++;
		else if(str[i]=='1') flag1++;
		else if(str[i]=='2') flag2++;
		else if(str[i]=='3') flag3++;
		else if(str[i]=='4') flag4++;
		else if(str[i]=='5') flag5++;
		else if(str[i]=='6') flag6++;
		else if(str[i]=='7') flag7++;
		else if(str[i]=='8') flag8++;
		else if(str[i]=='9') flag9++;
	}
	if(flag0!=0) cout<<"0:"<<flag0<<endl;
	if(flag1!=0){
		cout<<"1:"<<flag1<<endl;
	}
	if(flag2!=0){
		cout<<"2:"<<flag2<<endl; 
	}
	if(flag3!=0){
		cout<<"3:"<<flag3<<endl;
	} 
	if(flag4!=0){
		cout<<"4:"<<flag4<<endl;
	}	
	if(flag5!=0){
		cout<<"5:"<<flag5<<endl;
	} 
	if(flag6!=0){
		cout<<"6:"<<flag6<<endl;
	} 
	if(flag7!=0){
		cout<<"7:"<<flag7<<endl;
	} 
	if(flag8!=0){		
		cout<<"8:"<<flag8<<endl;
	} 
	if(flag9!=0){
		cout<<"9:"<<flag9<<endl;
	} 
	
} 
