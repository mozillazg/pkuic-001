#include<iostream>
using namespace std;
int main(){
    // 组数
    int group;
    cin >> group;
    // 字符串
    char str[1001];


    // 不断地输入并处理每组数据
    for(int iG = 0; iG < group; iG++){
        cin >> str;
        int cnt[26] = {};
        for(int i = 0; i < 1000; i++){
            // 计数并累计至cnt数组中
            if (str[i] == '\0') {
                break;
            }
            int tmp = 0;
            tmp = str[i] - 'a';
            cnt[tmp]++;
        }

        // 找出出现最多的字母及其数量
        int mostAlphabetIdx = 0;
        int maxCnt = 0;
        for (int i=0; i<26; i++) {
            if (cnt[i] > maxCnt) {
                maxCnt = cnt[i];
                mostAlphabetIdx = i;
            }
        }

        cout << (char) ('a' + mostAlphabetIdx) 
             << " " << maxCnt << endl;
    }
}
