#include<iostream>
#include<sstream>
#include<string>
using namespace std;

int get_str(string s,string n)
{
	string c;
	string str;
	stringstream ss;
	int num;
	for(int i=0;i<s.size();i++)
	{
		c=s[i];
		if(c==n)
		{
			str+=c;
		}
		else
		{
			num=0;
		}
	}
	ss<<str;
	ss>>num;
	return num;
}

int  main()
{
	string s1,s2,n1,n2;
	int sum;
	cin>>s1>>n1>>s2>>n2;
	sum=get_str(s1,n1)+get_str(s2,n2);
	cout<<sum;
}
