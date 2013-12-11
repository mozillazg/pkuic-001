#include <iostream>
using namespace std;

int main() {
    char str[501];
    char tmp[501];
    cin.getline(str, 501);
    int x = 0;
    string s = string(str);
    int len = s.size() + 1;

    int i=0, j=0, k=0;
    while (str[i] != '\0') {
        if (str[i] != ' ') {
            tmp[j] = str[i];
            j++;
        } else {
            for (k=j-1; k>=0; k--) {
                cout << tmp[k];
            }
            cout << " ";
            j=0;
        }
        i++;
    }

    for (k=j-1; k>=0; k--) {
        cout << tmp[k];
    }


    return 0;
}
