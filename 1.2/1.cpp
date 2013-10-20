#include<iostream>
using namespace std;

int main() {
    int a[3] = {1, 3, 5};
    int n = 0;
    int i = 0;
    int no = 0;
    cin >> n;

    for (i = 0; i < 3; i++) {
        if (n == a[i]) {
            cout << "NO";
            no = 1;
        }
    }
    if (no == 0) {
        cout << "YES";
    }
    return 0;
}
