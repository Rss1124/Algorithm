#include <stdio.h>

void BubbleSort(int a[]); //冒泡排序
void display(int a[]);

int main() {
    int a1[8] = {5,1,3,4,2,8,6,7}; //不带哨兵的数组
    int a2[9] = {0,5,1,3,4,2,8,6,7}; //带哨兵的数组
    BubbleSort(a2);
    return 0;
}

void BubbleSort(int a[]){
    int temp,swap;
    for(int i=1;i<8;i++){
        swap=0;
        for(int j=1;j<8;j++){
            if(a[j]>a[j+1]){
                temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
                swap=1;
            }
        }
        display(a);
        printf("\n");
        if(swap==0) break;
    }
}

void display(int a[]){
    for(int i=0;i<=8;i++){
        printf("%d",a[i]);
    }
}