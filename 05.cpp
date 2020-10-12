/*ÌâÄ¿£ºººÅµËş*/ 
#include<bits/stdc++.h>
using namespace std;
void Hanoi(int n,char A,char B,char C){
	if(n==1) cout<<A<<"¡ú"<<C<<endl;
	else{
		Hanoi(n-1,A,C,B);
		cout<<A<<"¡ú"<<C<<endl;
		Hanoi(n-1,B,A,C);
	}
}

int main(){
	Hanoi(3,'A','B','C');
} 
