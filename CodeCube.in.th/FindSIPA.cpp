/*
    TASK:
    LANG: CPP
    AUTHOR: Aphrodicez
    SCHOOL: RYW
*/

#include <bits/stdc++.h>
using namespace std;

char a[1010], b[1010];
char tmp[4] = { 'S','I','P','A' };

int main()
{
    int i, cnt = 0, len, ch = 0;
    scanf(" %s", a);
    len = strlen(a);
    for (i = 0; i < len; i++) {
        b[i] = toupper(a[i]);
    }
    for (i = -1; i < len; i++) {
        if (i >= 0)
            printf("%c", a[i]);
        if (ch)
            ch++;
        if (ch == 5) {
            printf("\"");
            ch = 0;
        }
        ///IF LETTERS LEFT LESS THAN 4
        if (len - i < 4) continue;
        if (b[i + 1] == 'S') {
            if (!strncmp(b + i + 1, tmp, 4)) {
                ///FOUND SIPA
                cnt++;
                ch++;
                printf("\"");
            }
        }
    }
    printf("\n%d", cnt);
    return 0;
}
