#include<iostream>
using namespace std;
int main()
{
	int num,n=0;
	cin>>num;
	while(num!=0)
	{
		if((0<=num&&num<10))
		{
			num--;
			n++;
			cout<<n;
		}
		if(10<=num&&num<100)
		{
			if(10<=num)
			{
				num=num-10;
				cout<<"S";
			}
			else if(num<10)
			{
				num--;
				n++;
				cout<<n;
			}
		}
		if(100<=num&&num<1000)
		{
			if(100<=num)
			{
				num=num-100;
				cout<<"B";
			}
			else if(10<=num)
			{
				num=num-10;
				cout<<"S";
			}
			else if(num<10)
			{
				num--;
				n++;
				cout<<n;
			}
		}
	}
}
