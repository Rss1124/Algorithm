#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
#define MAXSIZE 100005

typedef struct Node{
    int now; //结点当前地址
    int next; //结点的下一个地址
    int data;
}Node;

typedef struct Block{
    int begin;
    int end;
    int next;
}Block;

void createList(int num,Node array[]);
void createBlock(Node array[], int begin, Block arrayBlock[], int &length, int k);
void display(Node array[], int begin, Block arrayBlock[], int blockNum);
void reservesBlock(Block arrayBlock[],int blockNum, Node array[]);

int main(){
    int begin,num,k,listBegin,length=0,blockBegin;
    cin>>begin>>num>>k;
    float blockNum= (float)num/(float)k;
    blockNum= ceil(blockNum);
    Node *array;
    array = new Node[MAXSIZE]{};
    Block *arrayBlock;
    arrayBlock = new Block[int(blockNum+1)]{};
    createList(num, array);
    createBlock(array,begin,arrayBlock,length,k);
    arrayBlock[int(blockNum)].begin=-1;
    arrayBlock[int(blockNum)].end=-1;
    arrayBlock[int(blockNum)].next=-1;
//    display(array, listBegin,arrayBlock,blockNum);
    reservesBlock(arrayBlock, blockNum,array);
    blockBegin=arrayBlock[(int)blockNum-1].begin;
    display(array,blockBegin,arrayBlock,blockNum);
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

void createBlock(Node array[], int begin, Block arrayBlock[], int &length, int k){
    int index=begin,start,end,next,temp=1;
    while(index!=-1){
        if(temp==1) start=index;
        if(temp==k||(temp<k && array[index].next==-1)){
            end=index;
            next=array[index].next;
            temp=0;
            Block block;
            block.begin=start;
            block.end=end;
            block.next=next;
            arrayBlock[length++]=block;
        }
        temp++;
        index=array[index].next;
    }
}

void display(Node array[], int begin, Block arrayBlock[], int blockNum){
    int index=begin;
//    cout<<"链表如下:"<<endl;
    while(index!=-1){
        cout<<setw(5) << setfill('0')<<array[index].now<<" ";
        cout<<array[index].data<<" ";
        if(array[index].next==-1) cout<<-1<<endl;
        else cout<<setw(5) << setfill('0')<<array[index].next<<endl;
        index=array[index].next;
    }
//    cout<<"区块如下:"<<endl;
//    for(int i=0;i<blockNum+1;i++) cout<<arrayBlock[i].begin<<" "<<arrayBlock[i].end<<" "<<arrayBlock[i].next<<endl;
}

void reservesBlock(Block arrayBlock[],int blockNum, Node array[]){
    for(int i=blockNum-1;i>=0;i--){
        array[arrayBlock[i].end].next=arrayBlock[i-1].begin;
        if(i==0) array[arrayBlock[i].end].next=-1;
    }
}