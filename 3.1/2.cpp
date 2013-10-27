#include<iostream>
using namespace std;

int main() {
    float PAI = 3.14159;
    float A = 20 * 1000;
    // n: 桶数
    int h = 0, r = 0, n = 0;
    // a: 一桶水的体积
    float a = 0;
    cin >> h >> r;

    a = PAI * r * r * h;
    n = A / a;
    if (n * a < A) {
        n++;
    }

    cout << n;

    return 0;
}
