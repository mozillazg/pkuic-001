#include <iostream>
using namespace std;

int main() {
    int n = 0;
    float x = 0.0, bike = 0.0, walk = 0.0;
    cin >> n;

    for (int i=0; i<n; i++) {
        cin >> x;
        bike = 27 + 23 + x/3.0;
        walk = x/1.2;
        if (bike < walk) {
            cout << "Bike" << endl;
        } else if (bike == walk) {
            cout << "All" << endl;
        } else {
            cout << "Walk" << endl;
        }
    }

    return 0;
}
