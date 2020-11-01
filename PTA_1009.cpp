#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

int main()
{
	vector<string> str;
	int k=0;
	string s,temp;
	do
	{
		cin>>s;
		str.push_back(s);	
	}while(getchar()!='\n');
	if(str.size()%2!=0)
	{
		k=str.size()/2;
		for(int i=1;i<=k;i++)
		{
			temp=str[k-i];
			str[k-i]=str[k+i];
			str[k+i]=temp;
		}
	}
	if(str.size()%2==0)
	{
		k=str.size()/2;
		for(int i=0;i<k;i++)
		{
			temp=str[k+i];
			str[k+i]=str[k-1-i];
			str[k-1-i]=temp;
		}
	}
	for(int m=0;m<str.size();m++)
	{
		cout<<str[m];
		if(m!=str.size()-1)
		{
			cout<<" ";
		}
	}
}

