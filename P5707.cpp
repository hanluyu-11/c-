//上学迟到
#include<iostream>
using namespace std;
int main(){
    int t,s,v= 0;
    cin>>s;
    cin>>v;
    if(s % v == 0){
        t = s / v + 10;
    }
    else{
        t = s/v+10+1;
    }
    int hour = 8;
    int min = 0;
    min = min -t;//不能放到循环里写 放到循环里写就只判断不记录min
    while(min < 0){
        min +=60;
        hour -=1;
    }
    if(hour<0){
        hour+=24;
    }
    printf("%02d:%02d",hour,min);
    return 0;

}//
// Created by 韩璐羽 on 2026/5/5.
//