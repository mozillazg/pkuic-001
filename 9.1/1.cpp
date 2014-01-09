/*
=====
第1题：1:单词翻转
=====

总时间限制:
    1000ms
内存限制:
    65536kB

描述

    输入一个句子（一行），将句子中的每一个单词翻转后输出
输入
    只有一行，为一个字符串，不超过500个字符。单词之间以空格隔开。
输出
    翻转每一个单词后的字符串
样例输入

    hello world

样例输出

    olleh dlrow
*/

#include <iostream>
using namespace std;

int main() {
    char str[501];
    char tmp[501];
    cin.getline(str, 501);
    int x = 0;
    string s = string(str);
    int len = s.size() + 1;

    int i=0, j=0, k=0;
    while (str[i] != '\0') {
        if (str[i] != ' ') {
            tmp[j] = str[i];
            j++;
        } else {
            for (k=j-1; k>=0; k--) {
                cout << tmp[k];
            }
            cout << " ";
            j=0;
        }
        i++;
    }

    for (k=j-1; k>=0; k--) {
        cout << tmp[k];
    }


    return 0;
}
