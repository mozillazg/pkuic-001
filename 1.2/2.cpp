#include<iostream>
using namespace std;

int main() {
    int m = 0, n = 0;
    int result = 0, i = 0;
    cin >> m >> n;

    for (i = m; i <= n; i++) {
        if (i % 2 != 0) {
            result = result + i;
        }
    }
    cout << result;
    return 0;
}
