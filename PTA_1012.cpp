#include<iostream>
#include<vector>
#include<iomanip> 
using namespace std;


int main()
{
	int num,len,N,max;
	int x=1,sum=0,n=0,A1=0,A2=0,A3=0,A5=0;
	int b1=0,b2=0,b3=0,b4=0,b5=0;
	double A4=0;
	cin>>N;
	int array[N];
	for(int i=0;i<N;i++)
	{
		cin>>array[i];
	}
	for(int i=0;i<N;i++)
	{
		if(array[i]==-1)
		{
			continue;
		}
		if(array[i]%2==0&&array[i]%5==0)
		{
			A1+=array[i];
			array[i]=-1;
			b1=1;
		}
		if(array[i]%5==1)
		{
			array[i]=array[i]*x;
			x*=-1;
			A2+=array[i];
			array[i]=-1;
			b2=1;
		}
		if(array[i]%5==2)
		{
			A3++;
			array[i]=-1;
			b3=1;
		}
		if(array[i]%5==3)
		{
			sum++;
			A4+=array[i];
			array[i]=-1;
			b4=1;
		}
		if(array[i]%5==4)
		{
			max==array[i];
			if(array[i]>max)
			{
				max=array[i];
			}
			A5=max;
			b5=1;
		}
	}
	if(b1!=1)
	{
		cout<<"N"<<" ";
	}
	else
	{
		cout<<A1<<" ";	
	}
	if(b2!=1)
	{
		cout<<"N"<<" ";
	}
	else
	{
		cout<<A2<<" ";	
	}
	if(b3!=1)
	{
		cout<<"N"<<" ";
	}
	else
	{
		cout<<A3<<" ";	
	}
	if(b4!=1)
	{
		cout<<"N"<<" ";
	}
	else
	{
		cout<<fixed<<setprecision(1)<<A4/sum<<" ";
	}
	if(b5!=1)
	{
		cout<<"N";
	}
	else
	{
		cout<<A5;	
	}
}
