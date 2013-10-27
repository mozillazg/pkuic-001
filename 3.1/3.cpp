#include<iostream>
using namespace std;

int main() {
    int n = 0, i = 0, m = 0, max = 0;

    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> m;
        if (m > max) {
            max = m;
        }
    }
    cout << max;

    return 0;
}
