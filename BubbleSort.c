#include <stdio.h>

void BubbleSort(int a[]); //冒泡排序
void display(int a[]);
void swap(int i, int j, int a[]);

int main() {
    int a[8] = {5,1,3,4,2,8,6,7}; //不带哨兵的数组
    BubbleSort(a);
    return 0;
}

void swap(int i, int j, int a[]){
    int temp = a[j];
    if(a[i]>a[j]){
        a[j]=a[i];
        a[i]=temp;
    }
}

void BubbleSort(int a[]){
    for(int i=0;i<8;i++){
        for(int j=7;j>i;j--){
            swap(j-1, j, a);
        }
        display(a);
        printf("\n");
    }
}

void display(int a[]){
    for(int i=0;i<8;i++){
        printf("%d",a[i]);
    }
}