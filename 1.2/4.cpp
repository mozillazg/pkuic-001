#include<iostream>
using namespace std;

int main() {
    // n 第一行, i, j = 下标, x : 模, y: 1 的个数
    int n = 0, i = 0, j = 0, x = 0, y = 0;

    cin >> n;
    int a[n];
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (i = 0; i < n; i++) {
        int m = a[i];  // 取出一个数
        int tmp = m;
        y = 0;  // 个数为 0
        // 检查每次被 2 除的余数
        for (j = 0; j <= m / 2; j++) {
            x = tmp % 2;  // 求模
            tmp = tmp / 2;  //
            if (x == 1) {  // 如果余数为 1
                y++;  // 2 进制中就有一个 1
            }
        }
        cout << y << endl;
    }

    return 0;
}
