/*
    TASK:
    LANG: CPP
    AUTHOR: Aphrodicez
    SCHOOL: RYW
*/

#include <bits/stdc++.h>
using namespace std;

char a[22];

int main()
{
    int Case, q, i;
    scanf("%d", &q);
    for (Case = 1; Case <= q; Case++) {
        int ans = 0, ch = 0;
        scanf(" %s", a);
        int len = strlen(a);
        for (i = 0; i < len; i++) {
            ch = 0;
            if (a[i] == 'X') {
                ch = 3;
            }
            if (a[i] == 'T') {
                ch = 2;
            }
            if (a[i] == '-') {
                ch = 1;
            }
            ans = max(ans, ch);
        }
        if (ans == 3) {
            printf("Case #%d: No - Runtime error\n", Case);
        }
        else if (ans == 2) {
            printf("Case #%d: No - Time limit exceeded\n", Case);
        }
        else if (ans == 1) {
            printf("Case #%d: No - Wrong answer\n", Case);
        }
        else {
            printf("Case #%d: Yes\n", Case);
        }
    }
    return 0;
}
