#include<iostream>
#include<algorithm>
#include<vector>
using namespace std; 

struct Student
{
	int id,de,cai;
}; 

bool cmp(Student a,Student b)
{
	if(a.de+a.cai!=b.de+b.cai)
	return a.de+a.cai>b.de+b.cai;
	else
	{
		if(a.de!=b.de)
		return a.de>b.de;
		else
		return a.id<b.id;
	}
}

int main()
{
	std::ios::sync_with_stdio(false);
	int N,L,H,M=0;
	Student t;
	vector<Student>stu1,stu2,stu3,stu4;
	cin>>N>>L>>H;
	for(int i=0;i<N;i++)
	{
		cin>>t.id>>t.de>>t.cai;
		if(t.de>=L&&t.cai>=L)
		{
			M++;
			if(t.de>=H&&t.cai>=H)
			stu1.push_back(t);
			else if(t.de>=H&&t.cai<H)
			stu2.push_back(t);
			else if(t.de<H&&t.cai<H&&t.de>=t.cai)
			stu3.push_back(t);
			else
			stu4.push_back(t);
		}
	}
	sort(stu1.begin(),stu1.end(),cmp);
	sort(stu2.begin(),stu2.end(),cmp);
	sort(stu3.begin(),stu3.end(),cmp);
	sort(stu4.begin(),stu4.end(),cmp);
	cout<<M<<'\n';
	for(int i=0;i<stu1.size();i++)
	cout<<stu1[i].id<<' '<<stu1[i].de<<' '<<stu1[i].cai<<'\n';
	for(int i=0;i<stu2.size();i++)
	cout<<stu2[i].id<<' '<<stu2[i].de<<' '<<stu2[i].cai<<'\n';
	for(int i=0;i<stu3.size();i++)
	cout<<stu3[i].id<<' '<<stu3[i].de<<' '<<stu3[i].cai<<'\n';
	for(int i=0;i<stu4.size();i++)
	cout<<stu4[i].id<<' '<<stu4[i].de<<' '<<stu4[i].cai<<'\n';
	return 0;

}
