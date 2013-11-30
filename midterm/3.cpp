#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    // n是短信条数
    int n;
    // words用于记录一条短信的数目
    int words;
    // money是短信总资费
    double cost = 0.0;

    // 输入短信总条数
    cin >> n;
    // 处理每条短信
    for (int i = 0; i < n; i++){
        int x = 0;
        cin >> words;
        x = words / 70;
        if (words % 70 != 0) {
            x++;
        }
        cost += x * 0.1;
    }

    cout << fixed << setprecision(1) << cost << endl;

    return 0;
}
