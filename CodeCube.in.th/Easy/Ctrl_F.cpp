/*
    TASK: Ctrl F
    LANG: CPP
    AUTHOR: Aphrodicez
    SCHOOL: RYW
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, cnt = 0, i;
    scanf("%d %d", &n, &m);
    char a[n + 1], b[m + 1];
    scanf(" %s %s", a, b);
    for (i = 0; i < n; i++) {
        if (i > n - m)
            continue;
        if (a[i] == b[0]) {
            if (!strncmp(a + i, b, m))
                cnt++;
        }
    }
    printf("%d", cnt);
    return 0;
}
