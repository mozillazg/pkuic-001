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
