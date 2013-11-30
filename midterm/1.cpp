#include<iostream>
#include<iomanip>
using namespace std;
int main(){

    // 多组数据
    int numGroup = 0;
    cin >> numGroup;

    // 书的数量
    int numBook = 10;

    // price为每本书的价格
    double price[] = {28.9, 32.7, 45.6, 78, 35, 86.2, 27.8, 43, 56, 65};


    // 处理多组输入
    for (int iGroup = 0; iGroup < numGroup; iGroup++){

        // sum为这组输入的总价
        double sum = 0;
        // 处理每一本书
        for (int iBook = 0; iBook < numBook; iBook++){
            int num;
            cin >> num;
            sum += price[iBook] * num;
        }

        // 按要求输出
        cout << fixed << setprecision(2) << sum << endl;
    }

    return 0;
}
