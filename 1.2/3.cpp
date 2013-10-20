#include<iostream>
using namespace std;

int main() {
    int a = 0;
    // m: 1 n: 5 x:10
    int m = 0, n = 0, x = 0;
    int j = 0;

    cin >> a;
    int b[a];
    for (j = 0; j < a; j++) {
        cin >> b[j];
    }

    for (j = 0; j < a; j++) {
        if (b[j] == 1) {
            m = m + 1;
        } else if (b[j] == 5) {
            n = n + 1;
        } else if (b[j] == 10) {
            x = x + 1;
        }
    }

    cout << m << endl;
    cout << n << endl;
    cout << x << endl;

    return 0;
}
