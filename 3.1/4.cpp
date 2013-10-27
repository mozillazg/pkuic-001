#include<iostream>
using namespace std;

int main() {
    int i = 0, a[6], j_max = -1, o_min = -1;
    int j[6], o[6], result = 0;
    int n_j = 0, n_o = 0;

    for (i = 0; i < 6; i++) {
        cin >> a[i];
    }
    for (i = 0; i < 6; i++) {
        if (a[i] % 2 != 0) {
            if (j_max == -1) {
                j_max = a[i];
            } else if (a[i] > j_max) {
                j_max = a[i];
            }
        } else {
            if (o_min == -1) {
                o_min = a[i];
            } else if (a[i] < o_min) {
                o_min = a[i];
            }
        }
    }
    result = j_max - o_min;
    if (result < 0) {
        result = o_min - j_max;
    }
    cout << result;

    return 0;
}
