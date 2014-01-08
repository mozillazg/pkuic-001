#include <iostream>
using namespace std;

int main() {
    int n = 0;
    int x = 0;
    cin >> n;
    int arr[n][n];

    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            cin >> arr[i][j];
        }
    }

    for (int i=1; i<n-1; i++) {
        for (int j=1; j<n-1; j++) {
            int tmp = arr[i][j] + 49;
            if ((tmp < arr[i-1][j]) &&
                (tmp < arr[i+1][j]) &&
                (tmp < arr[i][j-1]) &&
                (tmp < arr[i][j+1])) {
                x++;
            }
        }
    }

    cout << x << endl;

    return 0;
}
