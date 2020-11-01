#include<iostream>
#include<sstream>
#include<algorithm>
using namespace std;

int getmax(int n)
{
	int max;
	int a[4];
	a[0]=n/1000;
	a[1]=(n%1000)/100;
	a[2]=((n%1000)%100)/10;
	a[3]=(((n%1000)%100)%10);
	sort(a,a+4);
	max=a[3]*1000+a[2]*100+a[1]*10+a[0]*1;
	return max;
}

int getmin(int n)
{
	int min;
	int a[4];
	a[0]=n/1000;
	a[1]=(n%1000)/100;
	a[2]=((n%1000)%100)/10;
	a[3]=(((n%1000)%100)%10);
	sort(a,a+4);
	min=a[0]*1000+a[1]*100+a[2]*10+a[3]*1;
	return min;
}

int main()
{
	int num,num1,num2;
	stringstream ss;
	string n1,n2;
	cin>>num;
	while(num!=6174)
	{
		num1=getmax(num);
		num2=getmin(num);
		if(num1==num2)
		{
			cout<<num1<<" "<<"-"<<" "<<num2<<" "<<"="<<" "<<"0000";
			break;
		}
		num=num1-num2;
		ss<<num;
		ss>>n1;
		if(num%1000==num)
		{
			if(num%100==num)
			{
				n1="0"+n1;
			}
			if(num1%10==num1)
			{
				n1="0"+n1;
			}
			n1="0"+n1;
		}
		ss.clear();
		ss<<num2;
		ss>>n2;
		if(num2%1000==num2)
		{
			if(num2%100==num2)
			{
				n2="0"+n2;
			}
			if(num2%10==num2)
			{
				n2="0"+n2;
			}
			n2="0"+n2;
		}
		ss.clear();
		if(num==6174)
		{
			cout<<num1<<" "<<"-"<<" "<<num2<<" "<<" = "<<" "<<num;
		}
		else
		{
			cout<<num1<<" "<<"-"<<" "<<num2<<" "<<" = "<<" "<<num<<endl;	
		}
	}
}

