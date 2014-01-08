#include <iostream>
#include <iomanip>
using namespace std;


int func(int arr[5][5], int n, int m) {
    if (n > 4 || m > 4 || n < 0 || m < 0) {
        return 0;
    } else {
        int x[5], y[5];
        for (int i=0; i<5; i++) {
            x[i] = arr[n][i];
        }
        for (int i=0; i<5; i++) {
            y[i] = arr[m][i];
            arr[m][i] = x[i];
        }
        for (int i=0; i<5; i++) {
            arr[n][i] = y[i];
        }
        return 1;
    }
}


int main() {
    int arr[5][5];
    int n=0, m=0;
    for (int i=0; i<5; i++) {
        for (int j=0; j<5; j++) {
            cin >> arr[i][j];
        }
    }
    cin >> n >> m;

    if (func(arr, n, m) == 0) {
        cout << "error" << endl;
    } else {
        for (int i=0; i<5; i++) {
            for(int j=0; j<5; j++) {
                cout << setw(4) << arr[i][j];
            }
            cout << endl;
        }
    }

    return 0;
}
