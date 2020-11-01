#include<iostream>
#include<string>
using namespace std;

int main()
{
	int n,grade,max=0,min=0;
	cin>>n;
	string name,id,dna,di,xna,xi;
	for(int i=0;i<n;i++)
	{
		cin>>name>>id>>grade;
		if(i==0)
		{
			max=grade;
			dna=name;
			di=id;
			min=grade;
			xna=name;
			xi=id;
		}
		if(grade>max)
		{
			max=grade;
			dna=name;
			di=id;
		}
		if(grade<min)
		{
			min=grade;
			xna=name;
			xi=id;
		}
	}
	cout<<dna<<" "<<di<<endl;
	cout<<xna<<" "<<xi<<endl;
} 
