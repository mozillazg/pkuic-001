#include<iostream>
using namespace std;

int main() {
    // a: 整除的结果，b: 余数, c: 剩余
    int n = 0, x = 0, y = 0, a = 0, b = 0, c = 0;
    cin >> n >> x >> y;

    a = y / x;
    b = y % x;
    if (b != 0) {
        a++;
    }
    c = n - a;
    if (c < 0) {
        c = 0;
    }
    cout << c;

    return 0;
}
