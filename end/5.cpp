/*
=====
5 : 走迷宫
=====
总时间限制:
1000ms
内存限制:
65536kB
描述
一个迷宫由R行C列格子组成，有的格子里有障碍物，不能走；有的格子是空地，可以走。
给定一个迷宫，求从左上角走到右下角最少需要走多少步(数据保证一定能走到)。只能在水平方向或垂直方向走，不能斜着走。
输入
第一行是两个整数，Ｒ和Ｃ，代表迷宫的长和宽。（ 1<= R，C <= 40)
接下来是Ｒ行，每行Ｃ个字符，代表整个迷宫。
空地格子用'.'表示，有障碍物的格子用'#'表示。
迷宫左上角和右下角都是'.'。
输出
输出从左上角走到右下角至少要经过多少步（即至少要经过多少个空地格子）。计算步数要包括起点和终点。
样例输入
5 5
..###
#....
#.#.#
#.#.#
#.#..
样例输出
9
*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;



//广度搜索
int steps(int R, int C, char (*A)[50], int (*M)[50])
{
 struct{ int x, y, depth;}Queue[256], t;    //队列
 int front = 0, rear = 0,    //头尾指标
  di[4][2] = {{1,0},{0,-1},{-1,0},{0,1}};    //方向数组
 int i, new_x, new_y; 

Queue[rear].x = 0;     //初始点入队
 Queue[rear].y = 0;
 Queue[rear++].depth = 1;
 M[0][0] = 1;    //标记该店 

while(front != rear) 
 {
  t = Queue[front++];        //出队
  for(i=0; i<4; i++)        //遍历每个方向
  {
   new_x = t.x+di[i][0];    //产生新的坐标
   new_y = t.y+di[i][1];
    //判断点(x,y)是否可达
   if(new_x>=0 && new_x<=R && new_y>=0 && new_y<=C && A[new_x][new_y]=='.' && !M[new_x][new_y]) //若可达
   {
    if(new_x==R-1 && new_y==C-1)return t.depth+1;    //结束条件
    //入队
    Queue[rear].x = new_x;    
    Queue[rear].y = new_y;
    Queue[rear++].depth = t.depth+1;
    M[new_x][new_y] = 1;    //同样标记入队的点
   }
  }
 }
 return -1;    //无法走到终点，返回-1
}

int main() {

    int R, C;
    cin >> R >> C;
    char A[50][50]; //迷宫
    int M[50][50];  //标记走过的点
    for (int i=0; i<R; i++) {
        for (int j=0; j<C; j++) {
            cin >> A[i][j];
            M[i][j] = 0;
        }
    }

     printf("%d", steps(R, C, A, M));

    return 0;
}
