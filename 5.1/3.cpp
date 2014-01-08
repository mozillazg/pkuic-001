/*
=====
第3题：3:找出第k大的数
=====

总时间限制:
    1000ms
内存限制:
    1000kB

描述

    用户输入N和K，然后接着输入N个正整数（无序的），程序在不对N个整数排序的情况下，找出第K大的数。注意，第K大的数意味着从大到小排在第K位的数。
输入
    N
    K
    a1 a2 a3 a4 ..... aN
输出
    b
样例输入

    5
    2
    32 3 12 5 89

样例输出

    32

*/

#include <iostream>
using namespace std;

int main() {
    int N = 0, K = 0;
    cin >> N >> K;
    int *array = new int[N];

    for (int i = 0; i < N; i++) {
        cin >> array[i];
    }

    for (int i = 0; i < N; i++) {
        int Ngreater = 0;
        for (int j = 0; j < N; j++) {
            if (array[j] > array[i]) {
                Ngreater++;
            }
        }
        if (Ngreater == K - 1) {
            cout << array[i] << endl;
            return 0;
        }
    }
    delete[] array;

    return 0;
}
