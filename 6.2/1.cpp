#include <iostream>
using namespace std;

int main() {
    int n = 0, m = 0;
    cin >> n >> m;
    int a[n];
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }

    for (int i=n-m; i<n; i++) {
        cout << a[i] << " ";
    }
    for (int i=0; i<n-m; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
