#include <stdio.h>

void DirectInsertSort(int a[]); //ֱ�Ӳ�������
void display(int a[]);

int main() {
    int a1[8] = {5,1,3,4,2,8,6,7}; //�����ڱ�������
    int a2[9] = {0,5,1,3,4,2,8,6,7}; //���ڱ�������
    DirectInsertSort(a2);
    return 0;
}

void DirectInsertSort(int a[]){
    int temp=0; //�����ʱ����
    int j;
    for(int i=1;i<9;i++){
        if(a[i]<a[i-1]){ //�����Ԫ�ر�ǰ��С
//            printf("%d\n",a[i]);
            temp = a[i];
            for(j=i-1;j>=0&&a[j]>=temp;j--){
                a[j+1]=a[j]; //Ԫ�غ���
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