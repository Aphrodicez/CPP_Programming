/*
    TASK: File Name
    LANG: CPP
    AUTHOR: Aphrodicez
    SCHOOL: RYW
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, i, cnt = 0;
    cin >> n;
    int dp[n + 1];
    char c;
    dp[0] = 0;

    for (i = 1; i <= n; ++i) {
        cin >> c;
        dp[i] = 0;
        if (c == 'x')
            dp[i] = dp[i - 1] + 1;
        else
            dp[i] = dp[i - 1];
        if (i < 3)
            continue;
        if (dp[i] - dp[i - 3] == 3) {
            cnt++;
        }
    }
    cout << cnt;

    return 0;
}
