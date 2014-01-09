/*

=====
第3题：3:买房子
=====

总时间限制:
    1000ms
内存限制:
    65536kB

描述

    某程序员开始工作，年薪N万，他希望在中关村公馆买一套60平米的房子，现在价格是200万，假设房子价格以每年百分之K增长，并且该程序员未来年薪不变，且不吃不喝，不用交税，每年所得N万全都积攒起来，问第几年能够买下这套房子（第一年房价200万，收入N万）
输入
    有多行，每行两个整数N（10 <= N <= 50）, K（1 <= K <= 20）
输出
    针对每组数据，如果在第20年或者之前就能买下这套房子，则输出一个整数M，表示最早需要在第M年能买下，否则输出Impossible，输出需要换行
样例输入

    50 10
    40 10
    40 8

样例输出

    8
    Impossible
    10

提示
    C++里多行输入可以使用下面的语句

    while(cin>>N>>K){
        //do your magic
    }


    这段代码会不断尝试读入直到读到EOF为止。windows本地测试的时候可以在输入的时候在空行状态下按下Ctrl+Z再回车以输入EOF（end of file）来结束跳出循环。

*/

#include <iostream>
using namespace std;

int main() {
    int N = 0, K = 0;
    while (cin >> N >> K) {
        int M = 1;
        float n = 200, m = 0;
        int total = N;
        while (true) {
            int tmp = 0;
            m = total / n;
            if (m >= 1 && M < 21) {
                    cout << M << endl;
                    break;
            } else if (M > 20) {
                cout << "Impossible" << endl;
                break;
            }
            n += n * K/100;
            total += N;
            M++;
        }
    }

    return 0;
}
