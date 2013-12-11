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
