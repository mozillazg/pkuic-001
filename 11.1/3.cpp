/*
=====
第3题：3:文字排版
=====

总时间限制:
    1000ms
内存限制:
    65536kB

描述

    给一段英文短文，单词之间以空格分隔（每个单词应包括其前后紧邻的标点符号）。请将短文重新排版，要求如下：
    每行不超过80个字符；每个单词居于同一行上；在同一行的单词之间以一个空格分隔；行首和行尾都没有空格。
输入
    第一行是一个整数n，表示英文短文中单词的数目. 其后是n个以空格分隔的英文单词（单词包括其前后紧邻的标点符号，且每个单词长度都不大于40个字母）。
输出
    排版后的多行文本，每行文本字符数最多80个字符，单词之间以一个空格分隔，每行文本首尾都没有空格。
样例输入

    84
    One sweltering day, I was scooping ice cream into cones and told my four children they could "buy" a cone from me for a hug. Almost immediately, the kids lined up to make their purchases. The three youngest each gave me a quick hug, grabbed their cones and raced back outside. But when my teenage son at the end of the line finally got his turn to "buy" his ice cream, he gave me two hugs. "Keep the changes," he said with a smile. 

样例输出

    One sweltering day, I was scooping ice cream into cones and told my four
    children they could "buy" a cone from me for a hug. Almost immediately, the kids
    lined up to make their purchases. The three youngest each gave me a quick hug,
    grabbed their cones and raced back outside. But when my teenage son at the end
    of the line finally got his turn to "buy" his ice cream, he gave me two hugs.
    "Keep the changes," he said with a smile.
*/

#include <iostream>
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    cin.get();

    // next: 下一个单词的首字母位置
    // first: 每行的第一个单词的首字母位置
    int m = n * 80, next = 0, first = 0;

    char *arr = new char[m];
    cin.getline(arr, m);

    for (int x=0; arr[x]!='\0'; x++) {
        if (arr[x+1] == ' ' || arr[x+1] == '\0') {
            if (x - first > 79 && arr[x+1] != '\0') {
                cout << '\n';
                first = next;
            } else if (next != 0) {
                cout << ' ';
            }
            for (int j=next; j<x+1; j++) {
                cout << arr[j];
            }
            if (arr[x+1] != '\0') {
                next = x + 2;
            }
        }
    }

    return 0;
}
