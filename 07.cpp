/*С���������� hello ���ֵ��ʷǳ�����Ȥ�����ֵ��ʿ������÷�Ϊ�ĶΣ���һ����һ������������ĸ��ɣ��ڶ�����һ������Ԫ����ĸ��ɣ���������һ������������ĸ��ɣ����Ķ���һ������Ԫ����ĸ��ɡ�
����һ�����ʣ����ж���������Ƿ�Ҳ�����ֵ��ʣ�����������yes�����������no��
Ԫ����ĸ���� a, e, i, o, u���������������Ϊ������ĸ��
�������ʽ��
����һ�У�����һ�����ʣ�������ֻ����СдӢ����ĸ��
�������ʽ��
����𰸣�����Ϊyes������Ϊno��
���������롿
lanqiao
�����������
yes
���������롿
world
�����������
no*/
#include<bits/stdc++.h>
using namespace std;
int len=0;
int flag=1;
int flag1=0;
string str;

bool check(char c){ //��鴫�������ַ��Ƿ���Ԫ����ĸ
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u') return true;
    else return false;
}

int main(){
    cin>>str;
    len=str.length()-1;
    for(int i=0,j=len;i<j;i++,j--){
        if(j-i==2){ //�������Ȼ�ϵ����
            if(check(str[i])!=check(str[j])) flag1++;
            else{
                if(check(str[i])!=check(str[i+1])) flag1++;
            }
            break;
        }
        if(j-i==1){ //ż�����Ȼ�ϵ����
            if(check(str[i])!=check(str[i+1])) flag1++;
            break;
        }
        if(check(str[i])==true){ //�����ȥ����һ��Ԫ����ĸ��˳��
//			cout<<"˳��1"<<" "<<str[i]<<" "<<str[i+1]<<endl;
            if(check(str[i+1])==false) flag++; //�����Ԫ����ĸ����һ����ĸ������Ԫ����ĸ����ôflag+1
        }
        else if(check(str[i])==false){ //�����ȥ����һ����Ԫ����ĸ��˳��
//			cout<<"˳��2"<<" "<<str[i]<<" "<<str[i+1]<<endl;
            if(check(str[i+1])==true) flag++; //����÷�Ԫ����ĸ����һ����ĸ�����Ƿ�Ԫ����ĸ����ôflag+1
        }
        if(check(str[j])==true){ //�����ȥ����һ��Ԫ����ĸ������
//			cout<<"����1"<<" "<<str[j]<<" "<<str[j-1]<<endl;
            if(check(str[j-1])==false) flag++; //�����Ԫ����ĸ��ǰһ����ĸ������Ԫ����ĸ����ôflag+1
        }
        else if(check(str[j])==false){ //�����ȥ����һ����Ԫ����ĸ������
//			cout<<"����2"<<" "<<str[j]<<" "<<str[j-1]<<endl;
            if(check(str[j-1])==true) flag++; //����÷�Ԫ����ĸ��ǰһ����ĸ�����Ƿ�Ԫ����ĸ����ôflag+1
        }
    }
//	cout<<flag<<" "<<flag1<<endl;
    if(flag+flag1==4) cout<<"yes";
    else cout<<"no";
//	for(int i=0;i<len;i++){
//		if(check(str[i])==true) cout<<"yes"<<endl;
//		else cout<<"no"<<endl;
//	}
}