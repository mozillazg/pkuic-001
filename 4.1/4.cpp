/*
=====
第4题：4:最大奇数与最小偶数之差的绝对值
=====

总时间限制:
    1000ms
内存限制:
    65536kB

描述

    输入6个正整数，且这6个正整数中至少存在一个奇数和一个偶数。
    设这6个正整数中最大的奇数为a，最小的偶数为b，求出|a-b|的值
输入
    输入为一行，6个正整数,且6个正整数都小于100
    输入保证这6个数中至少存在一个奇数和一个偶数
输出
    输出为一行，输出最大的奇数与最小的偶数之差的绝对值
样例输入

    1 2 3 4 5 6

样例输出

    3
*/

#include<iostream>
using namespace std;

int main() {
    int i = 0, a[6], j_max = -1, o_min = -1;
    int j[6], o[6], result = 0;
    int n_j = 0, n_o = 0;

    for (i = 0; i < 6; i++) {
        cin >> a[i];
    }
    for (i = 0; i < 6; i++) {
        if (a[i] % 2 != 0) {
            if (j_max == -1) {
                j_max = a[i];
            } else if (a[i] > j_max) {
                j_max = a[i];
            }
        } else {
            if (o_min == -1) {
                o_min = a[i];
            } else if (a[i] < o_min) {
                o_min = a[i];
            }
        }
    }
    result = j_max - o_min;
    if (result < 0) {
        result = o_min - j_max;
    }
    cout << result;

    return 0;
}
