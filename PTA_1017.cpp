#include<iostream>
#include<sstream>
using namespace std;

int main()
{
	string A,Q,str;
	stringstream ss;
	int B,num,m,n,a=0;
	cin>>A>>B;
	for(int i=0;i<A.size();i++)
	{
		num=a+(A[i]-'0');
		a=0;
		if(num!=0)
		{
			if(num>=B)
			{
				m=num/B;
				n=num%B;
				ss<<m;
				ss>>str;
				ss.clear();
			}
			else
			{
				if(A.size()==1)
				{
					m=num/B;
					ss<<m;
					ss>>str;
					ss.clear();
				}
				n=num%B;
				if(i!=0)
				{
					str='0';
				}	
			} 
		}
		else
		{
			str='0';
		}
		if(n!=0)
		{
			a=n*10;
		}
		Q+=str;
	}
	cout<<Q<<" "<<n;
}
