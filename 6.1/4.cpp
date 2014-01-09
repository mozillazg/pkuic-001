/*
=====
第4题：4:找和为K的两个元素
=====

总时间限制:
    1000ms
内存限制:
    65536kB

描述

    在一个长度为n(n < 1000)的整数序列中，判断是否存在某两个元素之和为k。
输入
    第一行输入序列的长度n和k，用空格分开。
    第二行输入序列中的n个整数，用空格分开。
输出
    如果存在某两个元素的和为k，则输出yes，否则输出no。
样例输入

    9 10
    1 2 3 4 5 6 7 8 9

样例输出

    yes

*/

#include <iostream>
using namespace std;

int main() {
    int n = 0, k = 0;
    cin >> n >> k;
    int a[n];
    bool b = false;
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            if (a[i] + a[j] == k) {
                cout << "yes" << endl;
                b = true;
                break;
            }
        }
        if (b) {
            break;
        }
    }
    if (!b) {
        cout << "no" << endl;
    }

    return 0;
}
