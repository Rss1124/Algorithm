#include <stdio.h>

void SelectSort(int a[],int n); //直接选择排序
void display(int a[]);

int main() {
    int a1[8] = {5,1,3,4,2,8,6,7}; //不带哨兵的数组
    int a2[9] = {0,5,1,3,4,2,8,6,7}; //带哨兵的数组
    SelectSort(a2,8);
    display(a2);
    return 0;
}

void SelectSort(int a[],int n){
    int min; //min用于记录最小值的下标
    int temp;
    for(int i=1;i<=n;i++){
        min=i;
        for(int j=i+1;j<=n;j++){
            if(a[j]<a[min]) min=j;
        }
        if(min!=i){
            temp=a[min];
            a[min]=a[i];
            a[i]=temp;
        }
    }
}

void display(int a[]){
    for(int i=0;i<=8;i++){
        printf("%d",a[i]);
    }
}