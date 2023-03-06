/**
 * 654.最大二叉树
 * https://leetcode.cn/problems/maximum-binary-tree/
 */

#include <iostream>
#include <queue>
using namespace std;

typedef struct Node{
    int value=0;
    int index=-2;
    int leftIndex=-2;
    int rightIndex=-2;
}Node;

Node compare(Node A, Node B); // 用于比较两个node的大小
Node findRoot(Node array[], int l, int r); // 每次递归前都会找到一个根节点root
int maxBinaryTree(Node array[], int l, int r, int &begin, int length); // 通过递归的方式生成最大二叉树, *核心算法*

Node compare(Node A, Node B){
    if(A.value > B.value) return A;
    else return B;
}

Node findRoot(Node array[], int l, int r){
    Node max;
    max.value=-9999;
    max.index=-9999;
    for(int i=l; i<=r; i++) max = compare(array[i], max);
    return max;
}

int maxBinaryTree(Node array[], int l, int r, int &begin, int length){
    if(r<l) return -1;
    if(r==l) return r;
    Node root;
    root = findRoot(array, l, r);
    int index = root.index;
    if(l==0 && r==length-1) begin=index;
    array[index].leftIndex = maxBinaryTree(array, l, index-1, begin, length);
    array[index].rightIndex = maxBinaryTree(array, index+1, r, begin, length);
    return index;
}

int main() {
    int begin=-1;
    int arrayLength;
    queue<Node> q;
    cin>>arrayLength;
    Node *array = new Node[arrayLength];
    for (int i = 0; i < arrayLength; ++i) {
        array[i].index = i;
        cin>>array[i].value;
    }
    maxBinaryTree(array, 0, arrayLength-1, begin, arrayLength);

    q.push(array[begin]);
    while(!q.empty()){
        Node node;
        node = q.front();
        if(node.value == -1) cout<<"null"<<" ";
        else cout<<node.value<<" ";
        q.pop();
        if(node.leftIndex==-1){
            Node temp;
            temp.value = -1;
            q.push(temp);
        }
        if(node.leftIndex>=0) q.push(array[node.leftIndex]);
        if(node.rightIndex==-1){
            Node temp;
            temp.value = -1;
            q.push(temp);
        }
        if(node.rightIndex>=0) q.push(array[node.rightIndex]);

    }

}
