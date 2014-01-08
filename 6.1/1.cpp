#include <iostream>
using namespace std;

int main() {
    int a = 0, b = 0, sum = 0;
    cin >> a;
    for (int i=0; i<5; i++) {
        cin >> b;
        if (b < a) {
            sum += b;
        }
    }
    cout << sum;

    return 0;
}
