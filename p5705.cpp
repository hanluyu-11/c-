//反转数字
#include<iostream>
using namespace std;
int main() {
    float num = 0.1f;

    cin>>num;
    int temp = num;
    int a = temp / 100 ;//百
    int b= temp / 10 % 10;//十
    int c = temp % 10;//个

    float d = num - temp;
    int e = (int)(d * 10.0f + 0.5f);//小数转成整数时,必须加0.5f
    float num2 = 0.2f;
    //只要有浮点数就会全自动转化成浮点 想把整数换成浮点，必须乘10.0f,否则得不到小数
    num2 = e + c / 10.0f + b /100.0f +a/1000.0f;
    cout<<num2;
    system("pause");
    return 0;
}//
// Created by 韩璐羽 on 2026/5/2.
//