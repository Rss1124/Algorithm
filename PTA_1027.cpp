#include "iostream"
#include "algorithm"
#include "iomanip"
using namespace std;

void dfs(int num,int sum,char c,int &temp, int &maxNum);

int main(){
    char c;
    int sum;
    int temp=1,num=1;
    int maxNum=0;
    cin>>sum>>c;
    if(sum<7){
        cout<<c<<endl;
        cout<<sum-1;
    }
    else{
        dfs(num,sum,c,temp,maxNum);
        while(num<=maxNum){
            int invalidNum=(maxNum-num)/2;
            if(invalidNum>=1) for(int i=0;i<invalidNum;i++) cout<<" ";
            for(int i=0;i<num;i++) cout<<c;
            cout<<endl;
            num=num+2;
        }
        num=1;
        while(num<=maxNum){
            if(num==1) sum=sum-num;
            else sum=sum-(num*2);
            num=num+2;
        }
        cout<<sum<<endl;
    }
}

void dfs(int num,int sum,char c,int &temp, int &maxNum){
    temp=temp+2*(num+2);
    if(temp<=sum){
        dfs(num+2,sum,c,temp,maxNum);
        maxNum= max(maxNum,num+2);
        int invalidNum=(maxNum-(num+2))/2;
        if(invalidNum>=1) for(int i=0;i<invalidNum;i++) cout<<" ";
        for(int i=0;i<num+2;i++) cout<<c;
        cout<<endl;
    }
    else return;
}