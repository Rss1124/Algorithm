/*小明对类似于 hello 这种单词非常感兴趣，这种单词可以正好分为四段，第一段由一个或多个辅音字母组成，第二段由一个或多个元音字母组成，第三段由一个或多个辅音字母组成，第四段由一个或多个元音字母组成。
给定一个单词，请判断这个单词是否也是这种单词，如果是请输出yes，否则请输出no。
元音字母包括 a, e, i, o, u，共五个，其他均为辅音字母。
【输入格式】
输入一行，包含一个单词，单词中只包含小写英文字母。
【输出格式】
输出答案，或者为yes，或者为no。
【样例输入】
lanqiao
【样例输出】
yes
【样例输入】
world
【样例输出】
no*/
#include<bits/stdc++.h>
using namespace std;
int len=0;
int flag=1;
int flag1=0;
string str;

bool check(char c){ //检查传进来的字符是否是元音字母
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u') return true;
    else return false;
}

int main(){
    cin>>str;
    len=str.length()-1;
    for(int i=0,j=len;i<j;i++,j--){
        if(j-i==2){ //奇数长度会合的情况
            if(check(str[i])!=check(str[j])) flag1++;
            else{
                if(check(str[i])!=check(str[i+1])) flag1++;
            }
            break;
        }
        if(j-i==1){ //偶数长度会合的情况
            if(check(str[i])!=check(str[i+1])) flag1++;
            break;
        }
        if(check(str[i])==true){ //如果进去的是一个元音字母（顺序）
//			cout<<"顺序1"<<" "<<str[i]<<" "<<str[i+1]<<endl;
            if(check(str[i+1])==false) flag++; //如果该元音字母的下一个字母不再是元音字母，那么flag+1
        }
        else if(check(str[i])==false){ //如果进去的是一个非元音字母（顺序）
//			cout<<"顺序2"<<" "<<str[i]<<" "<<str[i+1]<<endl;
            if(check(str[i+1])==true) flag++; //如果该非元音字母的下一个字母不再是非元音字母，那么flag+1
        }
        if(check(str[j])==true){ //如果进去的是一个元音字母（倒序）
//			cout<<"逆序1"<<" "<<str[j]<<" "<<str[j-1]<<endl;
            if(check(str[j-1])==false) flag++; //如果该元音字母的前一个字母不再是元音字母，那么flag+1
        }
        else if(check(str[j])==false){ //如果进去的是一个非元音字母（倒序）
//			cout<<"逆序2"<<" "<<str[j]<<" "<<str[j-1]<<endl;
            if(check(str[j-1])==true) flag++; //如果该非元音字母的前一个字母不再是非元音字母，那么flag+1
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