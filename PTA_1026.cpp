#include "iostream"
#include "iomanip"
#include "cmath"
using namespace std;

void fun(int C1, int C2);

int main(){
    int C1,C2;
    cin>>C1>>C2;
    fun(C1,C2);
}

void fun(int C1, int C2){
    float C=float(C2-C1)/100;
    float h=0,m=0,s=0,M=0,S=0;
    if(C>=3600){
        h=floor(C/3600);
        M=C-h*3600;
    }
    else M=C;
    if(M>=60){
        m=floor(M/60);
        S=M-m*60;
    }
    else S=M;
    s= round(S);
    cout<<setw(2) << setfill('0')<<h<<":"<<setw(2) << setfill('0')<<m<<":"<<setw(2) << setfill('0')<<s;
}