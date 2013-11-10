#include <iostream>
using namespace std;

int main() {
    int n = 0, m = 0;
    int x = 0, y = 0;
    cin >> n;
    for (int i=10; i<=n; i++) {
        x = i / 10;
        y = i % 10;
        m = x + y;
        if (i % m == 0) {
            cout << i << endl;
        }
    }

    return 0;
}
