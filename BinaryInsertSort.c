#include <stdio.h>

void BinaryInsertSort(int a[]); //�۰��������
void display(int a[]);

int main() {
    int a1[8] = {5,1,3,4,2,8,6,7}; //�����ڱ�������
    int a2[9] = {0,5,1,3,4,2,8,6,7}; //���ڱ�������
    BinaryInsertSort(a2);
    return 0;
}

void BinaryInsertSort(int a[]){
    int i,j,low,high,mid;
    for(i=2;i<=8;i++){
        a[0]=a[i]; //�ڱ���������Ŵ������Ԫ��
        low=1;
        high=i-1;
        /**�Ƚϣ�Ѱ�Ҳ����λ��**/
        while(low<=high){ //�����۰���ҵı�־��,low>high
            mid=(low+high)/2;
            if(a[0]<a[mid]) high=mid-1;
            else low=mid+1;
        }
        /**����**/
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