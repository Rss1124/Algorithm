#include<iostream>
#include<iomanip>
using namespace std;
#define MAXSIZE 100005

typedef struct Node{
    int index; //在数组中的索引
    int now; //结点当前地址
    int next; //结点的下一个地址
    int data;
}Node;

void createList(int num,Node array[]);
int reverseList(Node array[], int k,int index, int &m, int &tempBegin, int &tempPrev, int &begin, bool &flag);
void display(Node array[], int begin);

int main(){
    int begin,num,k,m=1,tempPrev=-2,tempBegin=-2,index;
    bool flag=false;
    cin>>begin>>num>>k;
    Node *array;
    array = new Node[MAXSIZE]{};
    index=begin;
    createList(num, array);
    while(index!=-1&&m!=-1){
        reverseList(array,k,index,m,tempBegin,tempPrev,begin,flag);
        if(tempPrev!=-2) array[tempPrev].next=tempBegin; //防止访问到不存在的内存地址,导致段错误
        index=tempBegin; //index=99999
    }
    if(tempPrev!=-2) array[tempPrev].next=index; //防止访问到不存在的内存地址,导致段错误
    display(array,begin);
    return 0;
}

void createList(int num,Node array[]){
    for(int i=0;i<num;i++){
        Node node;
        int now,next,data;
        cin>>now>>data>>next;
        node.now=now;
        node.data=data;
        node.next=next;
        array[now]=node;
    }
}

void display(Node array[], int begin){
    int index=begin;
    while(index!=-1){
        cout<<setw(5) << setfill('0')<<array[index].now<<" ";
        cout<<array[index].data<<" ";
        if(array[index].next==-1) cout<<-1<<endl;
        else cout<<setw(5) << setfill('0')<<array[index].next<<endl;
        index=array[index].next;
    }
}

int reverseList(Node array[], int k,int index, int &m, int &tempBegin, int &tempPrev, int &begin, bool &flag){
    if(array[index].next==-1&&m<k){
        m=-1;
        return index;
    }
    if(m==k){
        if(tempPrev!=-2) array[tempPrev].next=index; //防止访问到不存在的内存地址,导致段错误
        tempBegin=array[index].next; //-1
        if(flag==false){
            begin=index;
            flag=true;
        }
        return index;
    }
    if(array[index].next!=-1&&m<k){
        m++;
        reverseList(array, k, array[index].next, m, tempBegin, tempPrev, begin, flag);
        if(m==-1)return index;
        array[array[index].next].next=index;
        m--;
        if(m==1) tempPrev=index; //tempPrev=1
        return index;
    }
}