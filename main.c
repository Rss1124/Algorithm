/**ֱ�Ӳ�������**/
#include <stdio.h>

void DirectInsertSort(int a[]); //ֱ�Ӳ�������
void BinaryInsertSort(int a[]); //�۰��������
void ShellSort(int a[],int n); //ϣ������ n��ʾ��ʼ����
void BubbleSort(int a[]); //ð������
void QuickSort(int a[],int low,int high); //��������
int Sort(int a[],int low,int high); //���ź����㷨:ȷ�������λ��
void SelectSort(int a[],int n); //ֱ��ѡ������
void display(int a[]);

int main() {
    int a1[8] = {5,1,3,4,2,8,6,7}; //�����ڱ�������
    int a2[9] = {0,5,1,3,4,2,8,6,7}; //���ڱ�������
//    DirectInsertSort(a1);
//    BinaryInsertSort(a2);
//    ShellSort(a2,8);
//    BubbleSort(a2);
//    QuickSort(a2,1,8);
    SelectSort(a2,8);
    display(a2);
    return 0;
}

void SelectSort(int a[],int n){
    int min; //min���ڼ�¼��Сֵ���±�
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

int Sort(int a[],int low,int high){
    int pivot=a[low]; //��һ��Ԫ��Ϊ����
    while (low<high){
        while(low<high&&a[high]>=pivot) --high;
        a[low]=a[high];
        while(low<high&&a[low]<=pivot) ++low;
        a[high]=a[low];
    }
    a[low]=pivot;
    return low;
}

void QuickSort(int a[],int low,int high){
    if(low<high){
        int mid=Sort(a,low,high);
        QuickSort(a,low,mid-1);
        QuickSort(a,mid+1,high);
    }
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
        if(swap==0) break;
    }
}

void DirectInsertSort(int a[]){
    int temp=0; //�����ʱ����
    int j;
    for(int i=1;i<8;i++){
        if(a[i]<a[i-1]){ //�����Ԫ�ر�ǰ��С
//            printf("%d\n",a[i]);
            temp = a[i];
            for(j=i-1;j>=0&&a[j]>=temp;j--){
                a[j+1]=a[j]; //Ԫ�غ���
            }
            a[j+1]=temp;
            display(a);
            printf("\n");
        }
    }
}

void BinaryInsertSort(int a[]){
    int i,j,low,high,mid;
    for(i=2;i<=8;i++){
        a[0]=a[i];
        low=1;
        high=i-1;
        /**�Ƚϣ�Ѱ�Ҳ����λ��**/
        while(low<=high){
            mid=(low+high)/2;
            if(a[0]<a[mid]) high=mid-1;
            else low=mid+1;
        }
        /**����**/
        for(j=i-1;j>=high+1;j--){
            a[j+1]=a[j];
        }
        a[high+1]=a[0];
    }
}

void ShellSort(int a[],int n){
    int i,j,dk;
    for(dk=n/2;dk>=1;dk=dk/2){
        for(i=1+dk;i<=8;i++) {
            if(a[i]<a[i-dk]){
                a[0]=a[i];
                for(j=i-dk;j>0&&a[j]>a[0];j-=dk){
                    a[j+dk]=a[j];
                }
                a[j+dk]=a[0];
            }
        }
    }
}

void display(int a[]){
    for(int i=1;i<=8;i++){
        printf("%d",a[i]);
    }
}
