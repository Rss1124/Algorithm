#include <iostream>
using namespace std;

void fun(int array[], int &max, int length, int &temp);

int main() {
    int length, max=0;
    int *array;
    cin>>length;
    array = new int[length]{};
    for(int i=0;i<length;i++){
        int elem=0;
        cin>>elem;
        array[i]=elem;
    }
    int temp = array[0];
    if(max<temp) max=temp;
    fun(array, max, length, temp);
}

void fun(int array[], int &max, int length, int &temp){
    for(int i=0;i<length;i++){
        /** 一定要判断i+1是否越界！ **/
        if(temp<=0 && temp<array[i+1] && i+1<length) temp = array[i+1];
        else if(temp>=0 && temp<array[i+1] && i+1<length) temp = temp + array[i+1];
        else if(temp>=0 && temp>array[i+1] && i+1<length) temp = temp + array[i+1];
        if(max < temp) max=temp;
    }
    cout<<max;
}
