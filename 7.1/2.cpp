#include <iostream>
using namespace std;

int main() {
    int ax = 0, bx = 0, cx = 0, dx = 0;

    for (int p=1; p<5; p++){
        for(int d=1; d<5; d++){
            for(int t=1; t<5; t++){
                for(int h=1; h<5; h++){
                    if (p==d || p==t || p==h || d==t || d==h || t==h) {
                        continue;
                    }
                    ax = (d == 4) + (h == 1) + (p == 3);
                    bx = (h == 4) + (d == 1) + (p == 2) + (t == 3);
                    cx = (h == 1) + (d == 3);
                    dx = (p == 4) + (t == 1) + (h == 2) + (d == 3);
                    if (ax == 1 && bx == 1 && cx == 1 && dx == 1) {
                        cout << p << endl;
                        cout << d << endl;
                        cout << t << endl;
                        cout << h << endl;
                        return 0;
                    }
                }
            }
        }
    }

}
