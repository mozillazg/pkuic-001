/*
=====
1 : 删除重复元素保留1个
=====
总时间限制:
    1000ms
内存限制:
    65536kB
描述
    输入n 个整型数，把其中重复出现的元素删去（如出现三个5，则只保留第一次出现的5，删去后两个5），将剩余的元素顺次输出。整数个数 n 不大于300

输入
    第1行，输入整数的个数 n；
    第2行，输入 n 个整数，整数之间以空格间隔；
输出
    按原有顺序输出新数组（删除的不输出），数据之间以逗号间隔
样例输入
    10
    5 6 7 5 8 5 7 9 8 6
样例输出
    5,6,7,8,9
*/

#include <iostream>
using namespace std;

int main() {
    int n = 0, m = 0;
    cin >> n;
    int arr[n], b[n];

    for (int i=0; i<n; i++) {
        cin >> arr[i];
        bool has = false;
        for (int x=0; x<i; x++) {
            if (arr[i] == arr[x]) {
                has = true;
                break;
            }
        }
        if (!has) {
            b[m] = arr[i];
            m++;
        }
    }

    for (int i=0; i<m; i++) {
        cout << b[i];
        if (i<m-1) {
            cout << ',';
        }
    }

    return 0;
}
