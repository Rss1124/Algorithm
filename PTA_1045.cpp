#include "iostream"
#include "algorithm"
using namespace std;

void creatArray(int array[],int LMax[],int length,int &max);
void display(int a[],int length,int LMax[]);

int main(){
    int num,length=0,max=0,min=10000000000;
    cin>>num;
    int *array,*LMax,*RMin,*opArray;
    array=new int[num]{};
    LMax=new int[num]{};
    RMin=new int[num]{};
    opArray=new int[num]{};
    creatArray(array,LMax,num,max);
    for(int i=num-1;i>=0;i--){
        RMin[i]=min;
        if(array[i]<min) min=array[i];
        if(LMax[i]<array[i]&&array[i]<RMin[i]) opArray[length++]=array[i];
    }
    cout<<length;
    cout<<endl;
    sort(opArray,opArray+length);
    for(int i=0;i<length;i++){
        cout<<opArray[i];
        if(i!=length-1) cout<<" ";
    }
    printf("\n");
}

void display(int a[],int length,int LMax[]){
    for(int i=0;i<length;i++) printf("%d ",a[i]);
    printf("\n");
    for(int i=0;i<length;i++) printf("%d ",LMax[i]);
}

void creatArray(int array[],int LMax[],int length,int &max){
    for(int i=0;i<length;i++){
        int val;
        scanf("%d",&val);
        array[i]=val;
        LMax[i]=max;
        if(val>max) max=val;
    }
}