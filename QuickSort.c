#include <stdio.h>

void QuickSort(int a[],int low,int high); //��������
int Sort(int a[],int low,int high); //���ź����㷨:ȷ�������λ��
void display(int a[]);

int main() {
    int a1[8] = {5,1,3,4,2,8,6,7}; //�����ڱ�������
    int a2[9] = {0,5,1,3,4,2,8,6,7}; //���ڱ�������
    QuickSort(a1,0,7);
    display(a1);
    return 0;
}

int Sort(int a[],int low,int high){
    display(a);
    printf("\n");
    int pivot=a[low]; //��һ��Ԫ��Ϊ����
    while (low<high){ //Sort����������low>=high
        while(low<high&&a[high]>=pivot) --high; //��������ұߵ�ֵ�������,highָ������
        a[low]=a[high];
        while(low<high&&a[low]<=pivot) ++low; //���������߱ߵ�ֵ������С,lowָ������
        a[high]=a[low];
    }
    a[low]=pivot;
    return low; //����low��Ϊ�µ�����
}

void QuickSort(int a[],int low,int high){
    if(low<high){
        int mid=Sort(a,low,high); //mid: ����
        QuickSort(a,low,mid-1); //��������ߵ����ݽ�������
        QuickSort(a,mid+1,high); //�������ұߵ����ݽ�������
    }
}

void display(int a[]){
    for(int i=0;i<8;i++){
        printf("%d",a[i]);
    }
}