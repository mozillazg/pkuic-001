#include <iostream>
using namespace std;

int main() {
    int money;
    cin >> money;
    int denominations[] = {100, 50, 20, 10, 5, 1};

    for (int i = 0; i < 6; i++) {
        cout << money / denominations[i] << endl;
        money = money % denominations[i];
    }

    return 0;
}
