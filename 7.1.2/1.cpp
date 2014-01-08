#include <iostream>
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    int x[n];
    bool has = false;
    for (int i=0; i<n; i++) {
        cin >> x[i];
        if (x[i] == i) {
            cout << i << endl;
            has = true;
            break;
        }
    }
    if (!has) {
        cout << "N" << endl;
    }

    return 0;
}
