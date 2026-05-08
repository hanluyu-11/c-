//
// Created by 韩璐羽 on 2026/5/8.
#include<iostream>
using namespace std;
int main(){
    int day = 0;
    int max = 8;//不能写在循环里 因为每次比较完max都会又变成8
    for(int i = 1;i<=7;i++){
        int t1,t2;
        cin>>t1>>t2;
        //int max = 8;错误！
        int t = t1+t2;


        if (t>max) {
            max = t;
            day = i;//必须写在循环里 把最大的天数记录下来


        }

    }
    cout<<day<<endl;
    return 0;
}//