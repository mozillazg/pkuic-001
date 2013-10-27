#include<iostream>
using namespace std;

int main() {
    int x = 0;
    cin >> x;
    cout << x / 100 << endl;
    cout << x % 100 / 10 << endl;
    cout << x % 100 % 10;

    return 0;
}
