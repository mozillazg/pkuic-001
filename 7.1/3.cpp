/*
=====
第3题：3:最长单词2
=====

总时间限制:
    1000ms
内存限制:
    65536kB

描述

    一个以'.'结尾的简单英文句子，单词之间用空格分隔，没有缩写形式和其它特殊形式
输入
    一个以'.'结尾的简单英文句子（长度不超过500），单词之间用空格分隔，没有缩写形式和其它特殊形式
输出
    该句子中最长的单词。如果多于一个，则输出第一个
样例输入

    I am a student of Peking University.

样例输出

    University

*/

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[510];
    string s;
    string maxs = "";
    int m = 0, n = 0;
    int i = 0, max = 0;

    cin.get(str, 510);
    s = string(str);

    for (i=1; str[i]!='\0'; i++) {
        if (str[i] == ' ' or str[i] == '.') {
            string tmp = s.substr(m, i-m);
            if (tmp.size() > maxs.size()) {
                maxs = tmp;
            }
            m = i + 1;
        }
    }
    cout << maxs << endl;

    return 0;
}
