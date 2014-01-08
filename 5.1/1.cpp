/*
=====
第1题：1:年龄与疾病
=====

总时间限制:
    1000ms
内存限制:
    65536kB

描述

    某医院想统计一下某项疾病的获得与否与年龄是否有关，需要对以前的诊断记录进行整理。
输入
    共2行，第一行为过往病人的数目n（0 < n <= 100)，第二行为每个病人患病时的年龄。
输出
    每个年龄段（分四段：1-18，19-35，36-60，61-注意看样例输出的格式）的患病人数占总患病人数的比例，以百分比的形式输出，精确到小数点后两位（double）。关于c++的格式化的输入输出，请参考：http://www.cplusplus.com/reference/iomanip。也可以在网上搜索一下，资料很多的。
样例输入

    10
    1 11 21 31 41 51 61 71 81 91

样例输出

    1-18: 20.00%
    19-35: 20.00%
    36-60: 20.00%
    60-: 40.00%

提示
    C++里输出可以在include iomanip文件之后用下面的语句

    cout << fixed;
    cout << setprecision(2) << x << '%' << endl;

*/

#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cin >> n;
    int num1 = 0, num2 = 0, num3 = 0, num4 = 0;
    for (int i = 0; i < n; i++) {
        int tmpage;
        cin >> tmpage;
        if (tmpage >= 1 && tmpage <= 18) {
            num1++;
        } else if (tmpage >= 19 && tmpage <= 35) {
            num2++;
        } else if (tmpage >=36 && tmpage <= 60) {
            num3++;
        } else if (tmpage > 60) {
            num4++;
        }
    }

    double denominator = (num1 + num2 + num3 + num4) / 100.0;
    cout << fixed << setprecision(2) << "1-18: " << num1 / denominator << "%" << endl
         << "19-35: " << num2 / denominator << "%" << endl
         << "36-60: " << num3 / denominator << "%" << endl
         << "60-: " << num4 / denominator << "%" << endl;

    return 0;
}
