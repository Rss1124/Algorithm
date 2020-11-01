#include<iostream>
using namespace std;
void AlterCh(char c,char &ch)
{
	if(c=='C')
	ch='C';
	else if(c=='J')
	ch='J';
	else
	ch='B';
}
int Judge(char ch1,char ch2,char &ch)
{
	if(ch1==ch2)
	return 0;
	if(ch1=='C'&&ch2=='J'||ch1=='J'&&ch2=='B'||ch1=='B'&&ch2=='C')
	{
		AlterCh(ch1,ch);
		return 1;
	}
	AlterCh(ch2,ch);
	return -1;
}
void Handle(int *a,char ch)
{
	a[3]++;
	if(ch=='C')
	a[0]++;
	else if(ch=='J')
	a[1]++;
	else 
	a[2]++;
}
char Compare(int cntC,int cntJ,int cntB)
{
	if(cntB>=cntJ&&cntB>=cntC)
	return 'B';
	else if(cntC>cntB&&cntC>=cntJ)
	return 'C';
	else
	return 'J';
}
int main()
{
	int N,A[5]={0},B[5]={0};
	char ch1,ch2,ch;
	cin>>N;
	while(N--)
	{
		cin>>ch1>>ch2;
		if(Judge(ch1,ch2,ch)==1)
		Handle(A,ch);
		else if(Judge(ch1,ch2,ch)==-1)
		Handle(B,ch);
		else 
		{
			A[4]++;
			B[4]++;
		}
	}
	cout<<A[3]<<' '<<A[4]<<' '<<B[3]<<endl;
	cout<<B[3]<<' '<<B[4]<<' '<<A[3]<<endl;
	cout<<Compare(A[0],A[1],A[2])<<' '<<Compare(B[0],B[1],B[2]);
	return 0;
}
