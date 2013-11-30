#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    // 成绩与绩点对应关系共10档
    // SCORE记录每一档成绩的下限、对应的GP记录这一档成绩的绩点
    int nCLASS = 10;
    int SCORE[] = {90, 85, 82, 78, 75, 72, 68, 64, 60, 0}; 
    double GP[] = {4, 3.7, 3.3, 3.0, 2.7, 2.3, 2.0, 1.5, 1.0, 0};

    // credits记录每门课
    int credits[10] = {};

    // 课程数
    int nCourse = 0;
    cin >> nCourse;

    // 输出所有课的学分
    for (int iCourse = 0; iCourse < nCourse; iCourse++)
        cin >> credits[iCourse];

    // 初始化总学分和总绩点（乘以权重）
    // 即 totalGP = sum over all courses {credit * gp}
    double totalCredit = 0;
    double totalGP = 0;

    // 输入每门课的成绩并判断绩点，并累加至totalGP中
    for (int iCourse = 0; iCourse < nCourse; iCourse++){
        int tmpScore = 0;
        cin >> tmpScore;
        totalCredit += credits[iCourse];
        // 判断这个成绩落入那个绩点类别
        for (int iClass = 0; iClass < nCLASS; iClass++){
            if (tmpScore >= SCORE[iClass]){
                totalGP += credits[iCourse] * GP[iClass];
                break;
            }
        }
    }

    cout << fixed << setprecision(2) << (totalGP / totalCredit) << endl;

    return 0;
}
