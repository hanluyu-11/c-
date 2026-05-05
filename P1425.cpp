//P1425
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a = 0,b=0,c=0,d=0,e=0,f=0;
    cin>>a>>b>>c>>d;
    f=d-b;
    e = c-a;

    if(f <0){
        f = 60 -b+d;
        e--;//小时并不是直接减 分钟借位时小时其实没到一小时
    }

    cout<<e<<" "<<f<<endl;;

    return 0;

}//
// Created by 韩璐羽 on 2026/5/5.
//