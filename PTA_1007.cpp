#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int i,j,cnt=0;
	int pre=2;
	for(i=3;i<=n;i++)
	{
		for(j=2;j<=sqrt(i);j++)
		if(i%j==0)
		break;
		if(j>sqrt(i))
		{
			if(i-pre==2)
			cnt++;
			pre=i;
		}
	}
	cout<<cnt;	
	return 0;
}
