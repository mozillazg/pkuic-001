/*
=====
第5题：5:人民币支付
=====

总时间限制:
    1000ms
内存限制:
    65536kB

描述

    从键盘输入一指定金额（以元为单位，如345），然后输出支付该金额的各种面额的人民币数量，显示100元，50元，20元，10元，5元，1元各多少张，要求尽量使用大面额的钞票。
输入
    一个小于1000的正整数。
输出
    输出分行，每行显示一个整数，从上到下分别表示100元，50元，20元，10元，5元，1元人民币的张数
样例输入

    735

样例输出

    7
    0
    1
    1
    1
    0

*/

#include <iostream>
using namespace std;

int main() {
    int money;
    cin >> money;
    int denominations[] = {100, 50, 20, 10, 5, 1};

    for (int i = 0; i < 6; i++) {
        cout << money / denominations[i] << endl;
        money = money % denominations[i];
    }

    return 0;
}
