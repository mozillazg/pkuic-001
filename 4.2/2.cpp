/*
=====
第2题：1004:大整数加法
=====

总时间限制:
    1000ms
内存限制:
    65536kB

描述

    求两个不超过200位的非负整数的和。
输入
    有两行，每行是一个不超过200位的非负整数，可能有多余的前导0。
输出
    一行，即相加后的结果。结果里不能有多余的前导0，即如果结果是342，那么就不能输出为0342。
样例输入

    22222222222222222222
    33333333333333333333

样例输出

    55555555555555555555

*/

#include <iostream>
#include <cstring>
using namespace std;

// str1, str2 接受两个大整数输入并将它们转化至
// 整形数组 a1, a2 中
char str1[201], str2[201];
int a1[200] = {0}, a2[201] = {0};

int main() {
    // i 为循环变量
    int i;
    // 输入
    cin >> str1 >> str2;
    // len1, len2 记录两个数组的长度
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    for (i = 0; i < len1; i++) {
        a1[i] = str1[len1 - 1 - i] - '0';
    }
    for (i = 0; i < len2; i++) {
        a2[i] = str2[len2 -1 - i] - '0';
    }

    for (i = 0; i < 200; i++) {
        a2[i] += a1[i];
        if (a2[i] >= 10) {
            a2[i] -= 10;
            a2[i + 1]++;
        }
    }

    for (i = 200; i >= 0; i--) {
        if (a2[i] != 0) {
            break;
        }
    }

    if (i == -1) {
        cout << 0;
    } else {
        for (; i >= 0; i--) {
            cout << a2[i];
        }
    }
    cout << endl;

    return 0;
}
