#include "iostream"
#include "algorithm"
using namespace std;

void quicksort(long long int array[], long long int low, long long int high);
int sort(long long int array[], long long int low, long long int high);
void display(long long int array[],long long int length);
void creatArray(long long int array[],long long int length);

int main(){
    long long int num, p, maxlength=0;
    cin>>num>>p;
    long long int *array;
    array=new long long int[num]{};
    creatArray(array,num);
    quicksort(array,0,num-1);
//    display(array,num);
    for(long long int i=0;i<num;i++){
        for(long long int j=maxlength+i;j<num;j++){
            if(array[j]<=array[i]*p) maxlength=std::max(maxlength, j-i+1);
            else break;
        }
    }
    cout<<maxlength<<endl;
}

void creatArray(long long int array[],long long int length){
    for(long long int i=0;i<length;i++){
        long long int val;
        cin>>val;
        array[i]=val;
    }
}

void quicksort(long long int array[], long long int low, long long int high){
    if(low<high){
        long long int mid = sort(array,low,high);
        quicksort(array,low,mid-1);
        quicksort(array,mid+1,high);
    }
}

int sort(long long int array[], long long int low, long long int high){
    long long int temp = array[low];
    while(low<high){
        while(temp<=array[high] && low<high) high--;
        array[low] = array[high];
        while(array[low]<=temp && low<high) low++;
        array[high] = array[low];
    }
    array[low] = temp;
    return low;
}

void display(long long int array[],long long int length){
    for(long long int i=0;i<length;i++) cout<<array[i]<<" ";
}