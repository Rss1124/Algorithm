#include <stdio.h>

void QuickSort(int a[],int low,int high); //快速排序
int Sort(int a[],int low,int high); //快排核心算法:确定枢轴的位置
void display(int a[]);

int main() {
    int a1[8] = {5,1,3,4,2,8,6,7}; //不带哨兵的数组
    int a2[9] = {0,5,1,3,4,2,8,6,7}; //带哨兵的数组
    QuickSort(a1,0,7);
    display(a1);
    return 0;
}

int Sort(int a[],int low,int high){
    display(a);
    printf("\n");
    int pivot=a[low]; //第一个元素为枢轴
    while (low<high){ //Sort结束的条件low>=high
        while(low<high&&a[high]>=pivot) --high; //如果枢轴右边的值比枢轴大,high指针左移
        a[low]=a[high];
        while(low<high&&a[low]<=pivot) ++low; //如果枢轴左边边的值比枢轴小,low指针右移
        a[high]=a[low];
    }
    a[low]=pivot;
    return low; //返回low作为新的枢轴
}

void QuickSort(int a[],int low,int high){
    if(low<high){
        int mid=Sort(a,low,high); //mid: 枢轴
        QuickSort(a,low,mid-1); //对枢轴左边的数据进行排序
        QuickSort(a,mid+1,high); //对枢轴右边的数据进行排序
    }
}

void display(int a[]){
    for(int i=0;i<8;i++){
        printf("%d",a[i]);
    }
}