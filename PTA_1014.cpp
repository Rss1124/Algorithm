#include<iostream>
#include<string>
using namespace std;

void date1(string s1,string s2)
{
	int len;
	int n=0;
	int w,h;
	if(s1.size()>=s2.size())
	{
		len=s2.size();
	}
	else
	{
		len=s1.size();
	}
	for(int i=0;i<len;i++)
	{
		if(s1[i]==s2[i])
		{
			if(n==0)
			{
				if('A'<=s1[i]&&s1[i]<='Z')
				{	
					w=s1[i];
					n++;
				}
				if(w==65)
				{
					cout<<"MON"<<" ";
				}
				if(w==66)
				{
					cout<<"TUE"<<" ";
				}
				if(w==67)
				{
					cout<<"WED"<<" ";
				}
				if(w==68)
				{
					cout<<"THU"<<" ";
				}
				if(w==69)
				{
					cout<<"FRI"<<" ";
				}
				if(w==70)
				{
					cout<<"SAT"<<" ";
				}
				if(w==71)
				{
					cout<<"SUN"<<" ";
				}	
			}
			else
			{
				if('A'<=s1[i]&&s1[i]<='N')
				{
					h=s1[i]-65+10;
					cout<<h<<":";
					break;
				}
				if('0'<=s1[i]&&s1[i]<='9')
				{
					cout<<'0'<<s1[i]<<":";
				}
			}
		}
	}
}

void date2(string s3,string s4)
{
	int len;
	int m;
	if(s3.size()>=s4.size())
	{
		len=s4.size();
	}
	else
	{
		len=s3.size();
	}
	for(int i=0;i<len;i++)
	{
		if(s3[i]==s4[i]&&(('a'<=s3[i]&&s3[i]<='z')||('A'<=s3[i]&&s3[i]<='Z')))
		{
			m=i;
			break;
		}
	}
	if(0<=m&&m<=9)
	{
		cout<<"0"<<m;
	}
	else
	{
		cout<<m;	
	}
}

int main()
{
	string str1,str2,str3,str4;
	cin>>str1>>str2>>str3>>str4;
	date1(str1,str2); 
	date2(str3,str4);
}
