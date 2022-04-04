#include <stdio.h>

void DirectInsertSort(int a[]); //直接插入排序
void display(int a[]);

int main() {
    int a1[8] = {5,1,3,4,2,8,6,7}; //不带哨兵的数组
    int a2[9] = {0,5,1,3,4,2,8,6,7}; //带哨兵的数组
    DirectInsertSort(a2);
    return 0;
}

void DirectInsertSort(int a[]){
    int temp=0; //存放临时数据
    int j;
    for(int i=1;i<9;i++){
        if(a[i]<a[i-1]){ //后面的元素比前面小
//            printf("%d\n",a[i]);
            temp = a[i];
            for(j=i-1;j>=0&&a[j]>=temp;j--){
                a[j+1]=a[j]; //元素后移
            }
            a[j+1]=temp;
        }
        display(a);
        printf("\n");
    }
}

void display(int a[]){
    for(int i=0;i<9;i++){
        printf("%d",a[i]);
    }
}