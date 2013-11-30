#include <iostream>
using namespace std;

int main() {
    int N;
    int array[15000];
    while (cin >> N) {
        if (N == 0) {
            break;
        }
        for (int i=0; i<N; i++) {
            cin >> array[i];
        }
        for (int i=0; i<N-1; i++) {
            for (int j=0; j<N-1-i; j++) {
                if (array[j] > array[j+1]) {
                    int tmp = array[j+1];
                    array[j+1] = array[j];
                    array[j] = tmp;
                }
            }
        }
        if (N % 2 == 0) {
            cout << (array[N/2 - 1] + array[N/2]) / 2 << endl;
        } else {
            cout << array[N/2] << endl;
        }
    }

    return 0;
}
