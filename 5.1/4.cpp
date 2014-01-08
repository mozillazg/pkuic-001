/*
=====
第4题：4:奥运奖牌计数
=====

总时间限制:
    1000ms
内存限制:
    65536kB

描述

    2008年北京奥运会，A国的运动员参与了n天的决赛项目(1≤n≤17)。现在要统计一下A国所获得的金、银、铜牌数目及总奖牌数。
输入
    第1行是A国参与决赛项目的天数n，其后有n行，每一行是该国获得的金、银、铜牌数目，用空格隔开。
输出
    1行，包括4个整数，为A国所获得的金、银、铜牌总数及总奖牌数，用空格隔开。
样例输入

    3
    1 0 3
    3 1 0
    0 3 0

样例输出

    4 4 3 11

*/

#include <iostream>
using namespace std;

int main() {
    int N = 0;
    cin >> N;
    int gold = 0, silver = 0, bronze = 0;

    for (int i = 0; i < N; i++) {
        int tmpGold, tmpSilver, tmpBronze;
        cin >> tmpGold >> tmpSilver >> tmpBronze;
        gold += tmpGold;
        silver += tmpSilver;
        bronze += tmpBronze;
    }

    cout << gold << " ";
    cout << silver << " ";
    cout << bronze << " ";
    cout << gold + silver + bronze << endl;

    return 0;
}
