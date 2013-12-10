#include <iostream>
using namespace std;

int reverse(char *s)
{
   if(s[0]=='\0') {
     return 0;
   } else {
        reverse(&s[1]);
        if (s[0] != ' ' && s[0] != '\0') {
            cout << s[0];
        }
    }
}

int main() {
    char str[501];
    cin.getline(str, 501);
    int x = 0;

    for (int i=0; str[i]!='\0'; i++) {
        if (str[i] == ' ' || str[i+1] == '\0') {
            int j = i-x;
            if (x != 0) {
                j++;
            }
            reverse(&string(str).substr(x, j)[0]);
            x = i + 1;
            if (str[i] == ' ') {
                cout << ' ';
            }
        }
    }


    return 0;
}
