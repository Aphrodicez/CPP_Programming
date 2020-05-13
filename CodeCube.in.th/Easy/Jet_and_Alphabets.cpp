/*
    TASK: Jet and Alphabet
    LANG: CPP
    AUTHOR: Aphrodicez
    SCHOOL: RYW
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    char alpha = 'A';
    int n, m, i, j, cnt = 0;
    scanf("%d %d", &n, &m);
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            if (cnt % 26 == 0) {
                /// RESET TO A
                alpha = 'A';
                cnt = 0;
            }
            /// PRINT ASCII
            printf("%c", alpha + cnt);
            cnt++;

        }
        printf("\n");
    }
    return 0;
}
