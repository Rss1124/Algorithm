#include "iostream"
using namespace std;

void quicksort(int array[], int low, int high);
int sort(int array[], int low, int high);
void display(int a[]);

int main(){
    int array[8] = {5,1,3,4,2,8,6,7};
    quicksort(array,0,7);
    display(array);
}

void quicksort(int array[], int low, int high){
    if(low<high){
        int mid = sort(array,low,high);
        quicksort(array,low,mid-1);
        quicksort(array,mid+1,high);
    }
}

int sort(int array[], int low, int high){
    int temp = array[low];
    while(low<high){
        while(temp<=array[high] && low<high) high--;
        array[low] = array[high];
        while(array[low]<=temp && low<high) low++;
        array[high] = array[low];
    }
    array[low] = temp;
    return low;
}

void display(int a[]){
    for(int i=0;i<8;i++){
        printf("%d",a[i]);
    }
}