#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[510];
    string s;
    string maxs = "";
    int m = 0, n = 0;
    int i = 0, max = 0;

    cin.get(str, 510);
    s = string(str);

    for (i=1; str[i]!='\0'; i++) {
        if (str[i] == ' ' or str[i] == '.') {
            string tmp = s.substr(m, i-m);
            if (tmp.size() > maxs.size()) {
                maxs = tmp;
            }
            m = i + 1;
        }
    }
    cout << maxs << endl;

    return 0;
}
