#include <iostream>
using namespace std;

int main() {
    int N = 0;
    cin >> N;
    int gold = 0, silver = 0, bronze = 0;

    for (int i = 0; i < N; i++) {
        int tmpGold, tmpSilver, tmpBronze;
        cin >> tmpGold >> tmpSilver >> tmpBronze;
        gold += tmpGold;
        silver += tmpSilver;
        bronze += tmpBronze;
    }

    cout << gold << " ";
    cout << silver << " ";
    cout << bronze << " ";
    cout << gold + silver + bronze << endl;

    return 0;
}
