#include<iostream>
using namespace std;

int main(){
    int k;
    // 立方和
    int sumCubed = 0;

    cin >> k;

    int sum = 0;
    for (int i=1; i<=k; i++) {
        sum += i;
    }
    sumCubed = sum * sum;

    cout << sumCubed << endl;
}
