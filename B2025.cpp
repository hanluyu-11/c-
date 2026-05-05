//打印菱形

#include<iostream>
using namespace std;
int main(){
    for(int i = 1;i<=3;i++){
        for(int z = 0;z<3-i;z++){
            cout<<" ";

        }
        for(int j = 0;j<2*i-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for (int i = 2;i>=1;i--) {//4，5行就是1，2行倒着来，先写2在写1，i=2）
        for (int z = 0;z < 3-i;z++) {
            cout<<" ";
        }
        for (int j = 0;j<2*i-1;j++) {
            cout<<"*";
        }
        cout<<endl;
    }
    system("pause");
    return 0;
}//
// Created by 韩璐羽 on 2026/5/2.
//