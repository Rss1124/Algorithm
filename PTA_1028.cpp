/**
 * https://pintia.cn/problem-sets/994805260223102976/exam/problems/994805293282607104
 * **/
#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char info[100];
    int length, maxAge=-999999, minAge=999999, valid=0;
    string maxName, minName;
    scanf("%d", &length);
    for(int i=0; i<length; i++){
        int days, year, month, day, flag=1;
        scanf(" %[^\n]%*c",info);
        string name;
        char *tempName = std::strtok(info, " ");
        name = tempName;
        while(flag<=3){
            tempName = (strtok(NULL, "/"));
            if(flag==1) year = atoi(tempName);
            if(flag==2) month = atoi(tempName);
            if(flag==3) day = atoi(tempName);
            flag++;
        }
        days = (2014-year)*365 + (9-month)*30 + (6-day);
        if(days>=0 && days<=73000){
            valid++;
            if(maxAge<=days){
                maxAge=days;
                maxName = name;
            }
            if(days<=minAge){
                minAge=days;
                minName = name;
            }
        }
    }
    if(valid>0) cout<<valid<<" "<<maxName<<" "<<minName;
    else cout<<0;
    cout<<endl;
}