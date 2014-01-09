/*

=====
第4题：4:扩号匹配问题
=====

总时间限制:
    1000ms
内存限制:
    65536kB

描述
    在某个字符串（长度不超过100）中有左括号、右括号和大小写字母；规定（与常见的算数式子一样）任何一个左括号都从内到外与在它右边且距离最近的右括号匹配。写一个程序，找到无法匹配的左括号和右括号，输出原来字符串，并在下一行标出不能匹配的括号。不能匹配的左括号用"$"标注,不能匹配的右括号用"?"标注.
输入
    输入包括多组数据，每组数据一行，包含一个字符串，只包含左右括号和大小写字母，字符串长度不超过100
    注意：cin.getline(str,100)最多只能输入99个字符！
输出
    对每组输出数据，输出两行，第一行包含原始输入字符，第二行由"$","?"和空格组成，"$"和"?"表示与之对应的左括号和右括号不能匹配。
样例输入

    ((ABCD(x)
    )(rttyy())sss)(

样例输出

    ((ABCD(x)
    $$
    )(rttyy())sss)(
    ?            ?$

提示
    输入多行数据需要使用while(cin.getline(...))来处理，cin.getline以及cin>>会在读入到输入结束（EOF）时返回false。
*/

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    char ch[102], temp[102];
    int i = 0, j = 0, tempn[102];
    while(cin.getline(ch, 102)){
        j = 0;
        for(i=0;ch[i] != '\0';i ++) {
            temp[i]=' ';
            switch(ch[i]){
            case '(':
                tempn[j ++]=i;
                temp[i]='$';
                break;
            case ')':
                if (j) {
                    j--;
                    temp[tempn[j]]=' ';
                } else {
                    temp[i] = '?';
                    break;
                }
            }
        }
        temp[i]='\0';
        printf("%s\n%s\n",ch,temp);
    }

    return 0;
}
