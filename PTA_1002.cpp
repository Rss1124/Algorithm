#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main()
{
	string str1,str2;
	stringstream s;
	int num,sum=0;
	cin>>str1;
	for(int i=0;i<str1.length();i++)
	{
		s<<str1[i];
		s>>num;
		sum+=num;
		s.clear();
	}
	s<<sum;
	s>>str2;
	for(int i=0;i<str2.length();i++)
	{
		if(str2[i]==49)
		{
			cout<<"yi";
		}
		if(str2[i]==50)
		{
			cout<<"er";
		}
		if(str2[i]==51)
		{
			cout<<"san";
		}
		if(str2[i]==52)
		{
			cout<<"si";
		}
		if(str2[i]==53)
		{
			cout<<"wu";
		}
		if(str2[i]==54)
		{
			cout<<"liu";
		}
		if(str2[i]==55)
		{
			cout<<"qi";
		}
		if(str2[i]==56)
		{
			cout<<"ba";
		}
		if(str2[i]==57)
		{
			cout<<"jiu";
		}
		if(str2[i]==48)
		{
			cout<<"ling";
		}
		if(i!=str2.length()-1)
		{
			cout<<" ";
		}
	}
} 
