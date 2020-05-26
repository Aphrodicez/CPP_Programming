/*
    TASK: Deterministic Gacha
    LANG: CPP
    AUTHOR: Aphrodicez
    SCHOOL: RYW
*/

#include <bits/stdc++.h>
using namespace std;

int dp[100010];

int main()
{
    int n, k, i, ans = 0;
    char s[3];
    cin >> n >> k;
    for (i = 1; i <= n; i++) {
        cin >> s;
        if (s[0] == 'U')
            dp[i]++;
        dp[i] += dp[i - 1];
        if (i < k)
            continue;
        ans = max(ans, dp[i] - dp[i - k]);
    }
    cout << ans;
    return 0;
}
