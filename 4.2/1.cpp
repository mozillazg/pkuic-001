/*
=====
第1题：1003:细菌实验分组
=====

总时间限制:
    1000ms
内存限制:
    65536kB

描述

    有一种细菌分为A、B两个亚种，它们的外在特征几乎完全相同，仅仅在繁殖能力上有显著差别，A亚种繁殖能力非常强，B亚种的繁殖能力很弱。在一次为时一个 小时的细菌繁殖实验中，实验员由于疏忽把细菌培养皿搞乱了，请你编写一个程序，根据实验结果，把两个亚种的培养皿重新分成两组。
输入
    输入有多行，第一行为整数n（n≤100），表示有n个培养皿。
    其余n行，每行有三个整数，分别代表培养皿编号，试验前细菌数量，试验后细菌数量。
输出
    输出有多行：
    第一行输出A亚种培养皿的数量，其后每行输出A亚种培养皿的编号，按繁殖率升序排列。
    然后一行输出B亚种培养皿的数量，其后每行输出B亚种培养皿的编号，也按繁殖率升序排列。
样例输入

    5
    1 10 3456
    2 10 5644
    3 10 4566
    4 20 234
    5 20 232

样例输出

    3
    1
    3
    2
    2
    5
    4

提示
    亚种内部，细菌繁殖能力差异远远小于亚种之间细菌繁殖能力的差异。
    也就是说，亚种间任何两组细菌的繁殖率之差都比亚种内部两组细菌的繁殖率之差大。

*/

#include <iostream>
using namespace std;

int main() {
    // i, j 为循环变量
    int i, j;
    // n 为细菌的数量
    int n;
    // id 记录细菌的编号、rate 记录细菌的繁殖率，id[i] 与 rate[i] 对应
    int id[100];
    double rate[100];

    cin >> n;
    for (i = 0; i < n; i++) {
        // initial, final 表示这个细菌初始和结束的数量
        double initial, final;
        cin >> id[i] >> initial >> final;
        rate[i] = final / initial;
    }

    // 对整个细菌进行排序
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i -1; j++) {
            if (rate[j + 1] > rate[j]) {
                int tmp = id[j];
                id[j] = id[j + 1];
                id[j + 1] = tmp;
                double tmp2 = rate[j];
                rate[j] = rate[j + 1];
                rate[j + 1] = tmp2;
            }
        }
    }

    // 记录最大的差
    double max = 0;
    // num1 + 1 表示第一组细菌的数量
    int num1 = 0;
    // 找出相差最大的相邻两组细菌
    for (i = 0; i < n - 1; i++) {
        if (max < rate[i] - rate[i + 1]) {
            max = rate[i] - rate[i + 1];
            num1 = i;
        }
    }

    // 输出繁殖率较大的那组细菌
    cout << num1 + 1 << endl;
    for (i = num1; i >= 0; i--) {
        cout << id[i] << endl;
    }
    // 输出繁殖率较小的那组细菌
    cout << n - num1 - 1 << endl;
    for (i = n - 1; i >= num1 + 1; i--) {
        cout << id[i] << endl;
    }

    return 0;
}
