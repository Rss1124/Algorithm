#include<iostream>
#include<iomanip>
using namespace std;
#define MAXSIZE 1000005

typedef struct Node{
    int index; //在数组中的索引
    int now; //结点当前地址
    int next; //结点的下一个地址
    int data;
}Node;

void createList(int num,Node array[]);
int reverseList(Node array[], int k,int index, int &m, int &temp, int &tempBegin, int &end);
void display(Node array[], int begin);

int main(){
    int begin,num,k,m,temp,tempBegin=-1,end;
    cin>>begin>>num>>k;
    Node *array;
    array = new Node[MAXSIZE]{};
    temp=k;
    createList(num, array);
    if(k>1){
        m=num%k;
        reverseList(array,k,begin,m,temp,tempBegin,end);
    }
    if(k==1||k==0) tempBegin=begin;
//    cout<<array[0].now<<" "<<array[0].data<<" "<<array[0].next<<endl; //4
//    cout<<array[33218].now<<" "<<array[33218].data<<" "<<array[33218].next<<endl; //3
//    cout<<array[12309].now<<" "<<array[12309].data<<" "<<array[12309].next<<endl; //2
//    cout<<array[100].now<<" "<<array[100].data<<" "<<array[100].next<<endl; //1
//    cout<<array[99999].now<<" "<<array[99999].data<<" "<<array[99999].next<<endl; //5
//    cout<<array[68237].now<<" "<<array[68237].data<<" "<<array[68237].next<<endl; //6
    display(array,tempBegin);
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

int reverseList(Node array[], int k,int index, int &m, int &temp, int &tempBegin,int &end){
    if(array[index].next==-1) return index;
    else{
        int next = reverseList(array, k, array[index].next,m,temp,tempBegin,end);
        if(next==-2) return index;
        if(m>0){
            if(m==1) tempBegin=next;
            m--;
            return index;
        }
        if(temp==k){
            end=array[index].next;
            temp--;
        }
        temp--;
        array[next].next=index; //逆转
//        cout<<array[next].data<<" "<<array[next].next<<endl;
        if(temp==0){
            array[index].next=tempBegin;
//            cout<<array[index].data<<" "<<array[index].next<<endl;
            tempBegin=end;
            temp=k;
            return -2;
        }
        return index;
    }
}