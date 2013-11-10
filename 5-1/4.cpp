#include <iostream>
using namespace std;

int main() {
    int n = 0, k = 0;
    cin >> n >> k;
    int a[n];
    bool b = false;
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            if (a[i] + a[j] == k) {
                cout << "yes" << endl;
                b = true;
                break;
            }
        }
        if (b) {
            break;
        }
    }
    if (!b) {
        cout << "no" << endl;
    }

    return 0;
}
