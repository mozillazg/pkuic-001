#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    for (int i = 2; i <= 100; i++)
        for (int j = i; j <= 100; j++){
            for (int n = j; n <= 100; n++){
                if (i*i + j*j == n*n) {
                    printf("%d*%d + %d*%d = %d*%d\n", i, i, j, j, n, n);
                }
            }
        }

    return 0;
}
