#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str_a[80], str_b[80];
    cin.getline(str_a, 80);
    cin.getline(str_b, 80);

    for (int i=0; str_a[i] != '\0'; i++) {
        if (str_a[i] >= 'A' && str_a[i] <= 'Z') {
            str_a[i] = str_a[i] + 32;
        }
    }
    for (int i=0; str_b[i] != '\0'; i++) {
        if (str_b[i] >= 'A' && str_b[i] <= 'Z') {
            str_b[i] = str_b[i] + 32;
        }
    }
    int result = strcmp(str_a, str_b);
    if (result == 0) {
        cout << '=' << endl;
    } else if (result > 0) {
        cout << '>' << endl;
    } else {
        cout << '<' << endl;
    }

    return 0;
}
