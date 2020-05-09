/*
    TASK:
    LANG: CPP
    AUTHOR: Aphrodicez
    SCHOOL: RYW
*/

#include <bits/stdc++.h>
using namespace std;

int dp[7010][7010];
char a[7010][7010];
int number_Of_Land[7010];

int main()
{
    int n, m;
    int now, i, j, max_Day = 0;

    scanf("%d %d", &n, &m);

    for (i = 1; i <= n; i++)
        scanf(" %s", a[i] + 1);

    for (i = n; i >= 1; i--) {
        for (j = m; j >= 1; j--) {

            now = a[i][j] - '0';

            if (now == 0) {
                dp[i][j] = 0;
                continue;
            }

            dp[i][j] = min(dp[i][j + 1], min(dp[i + 1][j], dp[i + 1][j + 1])) + 1;

            max_Day = max(max_Day, dp[i][j]);

            number_Of_Land[dp[i][j]]++;
        }
    }

    for (i = max_Day; i >= 1; i--) {
        number_Of_Land[i] += number_Of_Land[i + 1];
    }

    for (i = 1; i <= min(n, m); i++) {
        printf("%d\n", number_Of_Land[i]);
    }

    return 0;
}
