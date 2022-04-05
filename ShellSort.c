#include <stdio.h>

void ShellSort(int a[],int n); //希尔排序 n表示初始增量
void display(int a[]);

int main() {
    int a1[8] = {5,1,3,4,2,8,6,7}; //不带哨兵的数组
    int a2[9] = {0,5,1,3,4,2,8,6,7}; //带哨兵的数组
    ShellSort(a2,8);
    display(a2);
    return 0;
}

void ShellSort(int a[],int n){
    int i,j,dk;
    for(dk=n/2;dk>=1;dk=dk/2){ //设置步长
        for(i=1+dk;i<=8;i++) {
            if(a[i]<a[i-dk]){ //后面的数比前面的小,将小的数保存起来
                a[0]=a[i];
                for(j=i-dk;j>0&&a[j]>a[0];j-=dk){ //依次从后面开始往前遍历,进行交换排序
                    a[j+dk]=a[j];
                }
                a[j+dk]=a[0];
            }
        }
        display(a);
        printf("\n");
    }
}

void display(int a[]){
    for(int i=1;i<=8;i++){
        printf("%d",a[i]);
    }
}