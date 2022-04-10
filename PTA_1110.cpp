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
int reverseList(Node array[], int index, int &m, int &blockEnd, int &prevEnd, int k, int &listBegin, bool &flag, int mod);
void display(Node array[], int begin);

int main(){
    int begin,num,k,m=1,index,listBegin;
    int blockEnd=0, prevEnd=-999;
    bool flag=false;
    cin>>begin>>num>>k;
    int mod=num%k;
    Node *array;
    array = new Node[MAXSIZE]{};
    index=begin;
    createList(num, array);
    reverseList(array, index, m, blockEnd, prevEnd, k, listBegin, flag, mod);
    array[blockEnd].next=-1;
    display(array, listBegin);
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

int reverseList(Node array[], int index, int &m, int &blockEnd, int &prevEnd, int k, int &listBegin, bool &flag, int mod){
    int temp;
    if(array[index].next==-1){
        blockEnd=index;
        m++;
        if(mod==1 &&flag==false){
            listBegin=index;
            flag=true;
            m=1;
        }
        if(k==1) listBegin=index;
        return index;
    }
    else temp = reverseList(array, array[index].next, m, blockEnd, prevEnd, k ,listBegin, flag, mod); //index=5 temp=6
    if(k==1){
        blockEnd=index;
        array[temp].next=index;
        return index;
    }
    if(m==1){
        if((array[index].next!=-1&&array[temp].next!=-1)||mod==1){
            prevEnd=blockEnd;
            blockEnd=index;
        }
    }
    if(mod>1&&flag==false){
        if(m==mod){
            listBegin = index;
            m=0;
            flag=true;
        }
    }
    else{
        if(m==k){
            if(prevEnd!=-999) array[prevEnd].next=index;
            else listBegin = index;
            m=0;
        }
    }
    m++;
    return index;
}