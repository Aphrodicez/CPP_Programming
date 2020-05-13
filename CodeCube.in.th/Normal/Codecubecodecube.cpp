/*
    TASK: Codecubecodecube
    LANG: CPP
    AUTHOR: Aphrodicez
    SCHOOL: RYW
*/

#include <bits/stdc++.h>
using namespace std;

char a[100010];
char tmp[8] = { 'c','o','d','e','c','u','b','e' };

int main()
{
    int len, now = 0, i, cnt = 0;
    scanf(" %s", a);
    len = strlen(a);
    for (i = 0; i < len; i++) {
        now %= 8;
        if (tmp[now] == a[i]) {
            now++;
            continue;
        }
        while (1) {
            now %= 8;
            if (tmp[now] == a[i]) {
                now++;
                break;
            }
            now++;
            cnt++;
        }
    }
    cnt += (8 - now) % 8;
    printf("%d", cnt);
    return 0;
}
