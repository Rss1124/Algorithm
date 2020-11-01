#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n,t;
	cin>>n>>t;
	double num=0,s[n],a[n],d[n];
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{
		cin>>s[i];
		d[i]=s[i]/a[i];
	}
	sort(d+1,d+1+n);
	for(int i=1;i<=n;i++)
	{
		double cmps,cmpa;
		for(int j=1;j<=n;j++)
		{
			if(d[i]==s[j]/a[j])
			{
				cmps=s[j];
				cmpa=a[j];
				s[j]=s[i];
				a[j]=a[i];
				s[i]=cmps;
				a[i]=cmpa;
			}
		}
	}
	for(int i=n;i>=1;i--)
	{
		if(t>=a[i])
		{
			t-=a[i];
			num+=a[i]*d[i];
		}
		else
		{
			num+=t*d[i];
			break;
		}
	}
	printf("%.2lf",num);
} 
