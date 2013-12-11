#include <iostream>
#include <cstdio>
using namespace std;


void jg(int n) {
    int x=0;
    if (n == 1) {
        printf("End\n");
        return;
    }
    if (n%2 != 0) {
        x = n * 3 + 1;
        printf("%d*3+1=%d\n", n, x);
    } else {
        x = n / 2;
        printf("%d/2=%d\n", n, x);
    }
    if (x == 1) {
        printf("End\n");
        return;
    }
    jg(x);
}


int main() {
    int n = 0;
    cin >> n;

    jg(n);

    return 0;
}
