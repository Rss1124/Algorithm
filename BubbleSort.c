#include <stdio.h>

void BubbleSort(int a[]); //冒泡排序
void display(int a[]);
int swap(int i, int j, int a[]);

int main() {
    int a[8] = {5,1,3,4,2,8,6,7}; //不带哨兵的数组
    BubbleSort(a);
    return 0;
}

int swap(int i, int j, int a[]){
    int temp = a[j];
    if(a[i]>a[j]){
        a[j]=a[i];
        a[i]=temp;
        return 1;
    } else return 0;
}

void BubbleSort(int a[]){
    int flag=0;
    for(int i=0;i<8;i++){
        for(int j=7;j>i;j--){
            flag = swap(j-1, j, a);
        }
        if(flag==0) break;
        display(a);
        printf("\n");
    }
}

void display(int a[]){
    for(int i=0;i<8;i++){
        printf("%d",a[i]);
    }
}