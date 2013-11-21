#include <iostream>
using namespace std;

int main() {
    char str[80];
    int a = 0, e = 0, i = 0, o = 0, u = 0;
    cin.getline(str, 80);
    for (int x=0; x < 80; x++) {
        switch (str[x]) {
            case '\0':
                break;
            case 'a':
                a++;
                break;
            case 'e':
                e++;
                break;
            case 'i':
                i++;
                break;
            case 'o':
                o++;
                break;
            case 'u':
                u++;
                break;
        }
    }

    cout << a << " " << e << " " << i << " " << o << " " << u << " ";

    return 0;
}
