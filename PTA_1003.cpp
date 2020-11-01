#include<iostream>
#include<string>
using namespace std;

int main() 
{
	int n,pat=0,np,nt,len;
	string str;
	string array[15];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int p=0,a=0,t=0,s=0;
		cin>>str;
		len=str.length();
		for(int j=0;j<len;j++)
		{
			if(str[j]!='P'&&str[j]!='A'&&str[j]!='T')
			{
				s=1;
			}
			else
			{
				s=0;
			}
			if(str[j]=='P')
			{
				p++;
				np=j;
			}
			if(str[j]=='A')
			{
				a++;
			}
			if(str[j]=='T')
			{
				t++;
				nt=j;
			}
			if(a!=0&&s==0&&p==1&&t==1&&np==0&&nt==(len-1))
			{
				pat=1;
			}
			else if(a!=0&&s==0&&p==1&&t==1&&(len-1-nt)/np==(nt-np-1))
			{
				pat=1;
			}
			else
			{
				pat=0;
			}
		}
		if(pat==1)
		{
			array[i]="YES";
		}
		else if(pat==0)
		{
			array[i]="NO";
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<array[i]<<endl;
	}
	return 0;
}
