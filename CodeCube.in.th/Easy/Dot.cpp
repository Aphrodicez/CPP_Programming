/*
    TASK: Dot
    LANG: CPP
    AUTHOR: Aphrodicez
    SCHOOL: RYW
*/

#include <bits/stdc++.h>
using namespace std;

int mark[1010][1010];

int main()
{
    int n, i, cnt = 0, x, y;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d %d", &x, &y);
        if (!mark[x][y]) {
            mark[x][y] = 1;
            cnt++;
        }
    }
    printf("%d", cnt);
    return 0;
}
