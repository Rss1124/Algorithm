#include <stdio.h>

void ShellSort(int a[],int n); //ϣ������ n��ʾ��ʼ����
void display(int a[]);

int main() {
    int a1[8] = {5,1,3,4,2,8,6,7}; //�����ڱ�������
    int a2[9] = {0,5,1,3,4,2,8,6,7}; //���ڱ�������
    ShellSort(a2,8);
    display(a2);
    return 0;
}

void ShellSort(int a[],int n){
    int i,j,dk;
    for(dk=n/2;dk>=1;dk=dk/2){ //���ò���
        for(i=1+dk;i<=8;i++) {
            if(a[i]<a[i-dk]){ //���������ǰ���С,��С������������
                a[0]=a[i];
                for(j=i-dk;j>0&&a[j]>a[0];j-=dk){ //���δӺ��濪ʼ��ǰ����,���н�������
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