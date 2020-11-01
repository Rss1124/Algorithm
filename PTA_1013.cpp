#include<iostream>
#include<cmath>
using namespace std; 
int main()
{
	int i=1,j;
	int n,m,num=0,time=0;
	cin>>m>>n;
	while(1)
	{
		i++;
		for(j=2;j<=sqrt(i);j++)
		{
			if(i%j==0)
			{
				break;
			}
		}
		if(j>sqrt(i))
		{
			num++;
			if(m<=num&&num<=n)
			{
				time++;
				if(time%10!=1)
				{
					cout<<" ";
				}
				cout<<i;
				if(time%10==0)
				{
					cout<<endl;
				}
			}
		}
		if((time+m-1)==n)
		{
			break;
		}
	}
}
