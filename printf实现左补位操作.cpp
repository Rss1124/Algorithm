#include<bits/stdc++.h>
using namespace std;

int main()
{
	printf("%04d\n", 123);	// 不足4位，在左侧补零
	printf("%10d\n", 123);	// 右对齐
	printf("%-10d\n", 123);	// 左对齐
	return 0;
}

