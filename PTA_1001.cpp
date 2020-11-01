#include<iostream>
using namespace std;
int main()
{
	int n = 0,num =0;
	cin>>n;
	if(n==1)
	{
		num=0;
	}
	else
	{
		while(n!=1)
		{
			if(n%2==0)
			{
				n=n/2;
			}
			else
			{
				n=(n*3+1)/2;
			}
			num++;
		}		
	}
	cout<<num;	
} 

