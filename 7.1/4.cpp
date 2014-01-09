/*
=====
第4题：4:矩阵交换行
=====

总时间限制:
    1000ms
内存限制:
    65536kB

描述
    编写一个函数，输入参数是5*5的二维数组，和n，m两个行下标。功能：判断n，m是否在数组范围内，如果不在，则返回0；如果在范围内，则将n行和m行交换，并返回1。
    在main函数中， 生成一个5*5的矩阵，输入矩阵数据，并输入n，m的值。调用前面的函数。如果返回值为0，输出error。如果返回值为1，输出交换n，m后的新矩阵。
输入
    5*5矩阵的数据，以及n和m的值。
输出
    如果不可交换，则输出error；
    如果可交换，则输出新矩阵
样例输入

    1 2 2 1 2
    5 6 7 8 3
    9 3 0 5 3
    7 2 1 4 6
    3 0 8 2 4
    0 4

样例输出

    3 0 8 2 4
    5 6 7 8 3
    9 3 0 5 3
    7 2 1 4 6
    1 2 2 1 2

提示
    不需要用while循环来反复读取文件中的测试集。
    输出error格式如下：
    cout<< "error" << endl;
    输出矩阵格式如下：
    cout<< setw(4)<< num;
    输出矩阵一行后要输出cout<< endl;

*/

#include <iostream>
#include <iomanip>
using namespace std;


int func(int arr[5][5], int n, int m) {
    if (n > 4 || m > 4 || n < 0 || m < 0) {
        return 0;
    } else {
        int x[5], y[5];
        for (int i=0; i<5; i++) {
            x[i] = arr[n][i];
        }
        for (int i=0; i<5; i++) {
            y[i] = arr[m][i];
            arr[m][i] = x[i];
        }
        for (int i=0; i<5; i++) {
            arr[n][i] = y[i];
        }
        return 1;
    }
}


int main() {
    int arr[5][5];
    int n=0, m=0;
    for (int i=0; i<5; i++) {
        for (int j=0; j<5; j++) {
            cin >> arr[i][j];
        }
    }
    cin >> n >> m;

    if (func(arr, n, m) == 0) {
        cout << "error" << endl;
    } else {
        for (int i=0; i<5; i++) {
            for(int j=0; j<5; j++) {
                cout << setw(4) << arr[i][j];
            }
            cout << endl;
        }
    }

    return 0;
}
