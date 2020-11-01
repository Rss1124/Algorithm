#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> array;
	int num,n=0;
	do
	{
		cin>>num;
		array.push_back(num);	
	}while(getchar()!='\n');
	while(n<array.size())
	{
		if(array[1]==0&&n==0)
		{
			cout<<0<<" "<<0;
			return 0;
		}
		else
		{
			if(array[n+1]!=0)
			{
				array[n]=array[n]*array[n+1];
				array[n+1]=array[n+1]-1;
				n=n+2;
			}
			else
			{
				array[n]=array[n+1]=1001;
				n=n+2;
			}			
		}
	}
	for(int i=0;i<array.size();i++)
	{
		if(array[i]==1001)
		{
			continue;
		}
		else
		{
			if(i!=0)
			{
				cout<<" ";
			}	
			cout<<array[i];
		}
	}
} 
