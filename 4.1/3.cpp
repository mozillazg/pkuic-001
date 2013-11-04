#include <iostream>
using namespace std;

int main() {
    int N = 0, K = 0;
    cin >> N >> K;
    int *array = new int[N];

    for (int i = 0; i < N; i++) {
        cin >> array[i];
    }

    for (int i = 0; i < N; i++) {
        int Ngreater = 0;
        for (int j = 0; j < N; j++) {
            if (array[j] > array[i]) {
                Ngreater++;
            }
        }
        if (Ngreater == K - 1) {
            cout << array[i] << endl;
            return 0;
        }
    }
    delete[] array;

    return 0;
}
