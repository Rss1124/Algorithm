#include<iostream>
#include<string>
using namespace std;
int main()
{
	int T;
	cin>>T;
	long A[T],B[T],C[T];
	string Case[T];
	for(int m=1;m<=T;m++)
	{
		cin>>A[m]>>B[m]>>C[m];	
	}
	for(int i=1;i<=T;i++)
	{
		if((A[i]+B[i])>C[i])
		{
			cout<<"Case #"<<i<<": "<<"true"<<endl;
		}
		else
		{
			cout<<"Case #"<<i<<": "<<"false"<<endl;
		}
	}
} 
