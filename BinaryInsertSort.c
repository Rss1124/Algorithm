#include <stdio.h>

void BinaryInsertSort(int a[]); //折半插入排序
void display(int a[]);

int main() {
    int a1[8] = {5,1,3,4,2,8,6,7}; //不带哨兵的数组
    int a2[9] = {0,5,1,3,4,2,8,6,7}; //带哨兵的数组
    BinaryInsertSort(a2);
    return 0;
}

void BinaryInsertSort(int a[]){
    int i,j,low,high,mid;
    for(i=2;i<=8;i++){
        a[0]=a[i]; //哨兵被拿来存放待插入的元素
        low=1;
        high=i-1;
        /**比较，寻找插入的位置**/
        while(low<=high){ //结束折半查找的标志是,low>high
            mid=(low+high)/2;
            if(a[0]<a[mid]) high=mid-1;
            else low=mid+1;
        }
        /**插入**/
        for(j=i-1;j>=high+1;j--){
            a[j+1]=a[j];
        }
        a[high+1]=a[0];
        display(a);
        printf("\n");
    }
}

void display(int a[]){
    for(int i=1;i<=8;i++){
        printf("%d",a[i]);
    }
}