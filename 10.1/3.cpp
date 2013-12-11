#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

int main() {

    const int N = 101;
    char str[N];
    int c, s[N][2];
    cin >> str;
    int sp =0, len = strlen(str);
    c = s[sp][0] = str[0];
    s[sp++][1] = 0;
    for(int i=1; i<len; i++){
        if(c == str[i]){
            s[sp][0] = str[i];
            s[sp++][1] = i;
        }else {
            printf("%d %d\n", s[--sp][1], i);
        }
    }

    return 0;
}
