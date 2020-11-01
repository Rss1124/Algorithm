#include<iostream>
#include<stdlib.h>
#include<algorithm>
using namespace std;


bool cmp(int x,int y)
{
    return x>y;
}
int main()
{
	int m,n,num,key=0,j=0,keyv=0;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]==-1)
		{
			continue;
		}
		else
		{
			num=a[i];
			while(num!=1)
			{
				if(num%2==0)
				{
					num=num/2;
				}
				else
				{
					num=(3*num+1)/2;
				}
				for(j=0;j<n;j++)
				{
					if(a[j]==num)
					{
						a[j]=-1;
					}
				}
			}	                                                                                                                                                                                     			
		}
	}
	sort(a,a+n,cmp);
	for(int i=0;i<n;i++)
	{
		if(a[i]==-1)
		{
			continue;
		}
		cout<<a[i];
		if(a[i+1]!=-1)
		{
			cout<<" ";
		}
	}
	return 0;
} 
