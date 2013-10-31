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
