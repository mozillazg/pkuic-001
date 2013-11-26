#include <iostream>
using namespace std;

int main() {
    int n = 0, m = 0;
    cin >> n >> m;
    int a[n];
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    for (int i=0; i<n; i++) {
        int x = m + n;
        if (m + n < n) {
            int y = a[i];
            a[i] = a[i+1];
            a
        }
    }
    for (int i=0; i<n; i++) {
        if (i == n -1) {
        cout << a[i] << endl;
        } else {
            cout << a[i] << " ";
        }
    }

    return 0;
}
