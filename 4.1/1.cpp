#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cin >> n;
    int num1 = 0, num2 = 0, num3 = 0, num4 = 0;
    for (int i = 0; i < n; i++) {
        int tmpage;
        cin >> tmpage;
        if (tmpage >= 1 && tmpage <= 18) {
            num1++;
        } else if (tmpage >= 19 && tmpage <= 35) {
            num2++;
        } else if (tmpage >=36 && tmpage <= 60) {
            num3++;
        } else if (tmpage > 60) {
            num4++;
        }
    }

    double denominator = (num1 + num2 + num3 + num4) / 100.0;
    cout << fixed << setprecision(2) << "1-18: " << num1 / denominator << "%" << endl
         << "19-35: " << num2 / denominator << "%" << endl
         << "36-60: " << num3 / denominator << "%" << endl
         << "60-: " << num4 / denominator << "%" << endl;

    return 0;
}
