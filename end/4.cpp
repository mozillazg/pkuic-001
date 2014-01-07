/*
=====
4 : 变幻的矩阵
=====
总时间限制:
1000ms
内存限制:
65536kB
描述
有一个N x N（N为奇数，且1 <= N <= 10）的矩阵，矩阵中的元素都是字符。这个矩阵可能会按照如下的几种变幻法则之一进行变幻（只会变幻一次）。 

现在给出一个原始的矩阵，和一个变幻后的矩阵，请编写一个程序，来判定原始矩阵是按照哪一种法则变幻为目标矩阵的。 

1. 按照顺时针方向旋转90度； 
如： 
1 2 3          7 4 1 
4 5 6  变幻为  8 5 2 
7 8 9          9 6 3 

2. 按照逆时针方向旋转90度； 
如： 
1 2 3          3 6 9 
4 5 6  变幻为  2 5 8 
7 8 9          1 4 7 

3. 中央元素不变（如下例中的 5），其他元素（如下例中的3）与“以中央元素为中心的对应元素”（如下例中的7）互换； 
如： 
1 2 3          9 8 7 
4 5 6  变幻为  6 5 4 
7 8 9          3 2 1 

4. 保持原始矩阵，不变幻； 

5. 如果 从原始矩阵 到 目标矩阵 的变幻，不符合任何上述变幻，请输出5

输入
第一行：矩阵每行/列元素的个数 N；
第二行到第N+1行：原始矩阵，共N行，每行N个字符；
第N+2行到第2*N+1行：目标矩阵，共N行，每行N个字符；
输出
只有一行，从原始矩阵 到 目标矩阵 的所采取的 变幻法则的编号。
样例输入
5
a b c d e
f g h i j
k l m n o
p q r s t
u v w x y
y x w v u
t s r q p
o n m l k
j i h g f
e d c b a
样例输出
3
*/

#include <iostream>
using namespace std;

inline char getItem(char mat[10][10], int x, int y)
{
    char (*p)[10];
    p = mat;
    return *(*(p + x) + y);
}

inline void setItem(char mat[10][10], int x, int y, char val)
{
    char (*p)[10];
    p = mat;
    *(*(p + x) + y) = val;
}

int main() {
    int n, x, y, difference = 0;
    char mat1[10][10], mat2[10][10], temp;
    cin >> n;
    for (y = 0; y < n; y++)
        for (x = 0; x < n; x++)
        {
            cin >> temp;
            setItem(mat1, x, y, temp);
        }
    for (y = 0; y < n; y++)
        for (x = 0; x < n; x++)
        {
            cin >> temp;
            setItem(mat2, x, y, temp);
            if (temp != getItem(mat1, x, y))
                difference++;
        }
    if (difference == 0)
        cout << 4;
    else
    {
        for (y = 0; y < n; y++)
        {
            for (x = 0; x < n; x++)
                if (getItem(mat1, x, y) != getItem(mat2, x, y))
                    if (getItem(mat1, x, y) != getItem(mat2, n - 1 - x, n - 1 - y))
                        break;
            if (x < n)
                break;
        }
        if (y == n)
        {
            cout << 3;
            return 0;
        }
        for (y = 0; y < n; y++)
        {
            for (x = 0; x < n; x++)
                if (getItem(mat1, x, y) != getItem(mat2, n - 1 - y, x))
                    break;
            if (x < n)
                break;
        }
        if (y == n)
        {
            cout << 1;
            return 0;
        }
        for (y = 0; y < n; y++)
        {
            for (x = 0; x < n; x++)
                if (getItem(mat1, x, y) != getItem(mat2, y, n - 1 - x))
                    break;
            if (x < n)
                break;
        }
        if (y == n)
            cout << 2;
        else
            cout << 5;
    }
}
