#include<iostream>
using namespace std;
int main()
{
	int m,n,k=0,temp;
	cin>>m>>n;
	int a[m];
	for(int i=1;i<=m;i++)
	{
		cin>>a[i];
	}
	for(int i=m;i>=1;i--)
	{
		if(n%m==k)
		{
			break;
		}
		else
		{
			temp=a[m];
			for(int j=m;j>=1;j--)
			{
				if(n==0)
				{
					break;
				}
				else
				{
					if(j==1)
					{
						a[j]=temp;	
						k++;
						break;
					}	
					else
					{
						a[j]=a[j-1];
					}
				}	
			}	
		}
	}
	for(int j=1;j<=m;j++)
	{
		cout<<a[j];
		if(j!=m)
		{
			cout<<" ";
		}
	}
}
