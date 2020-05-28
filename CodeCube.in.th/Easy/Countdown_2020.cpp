/*
    TASK: Countdown 2020
    LANG: CPP
    AUTHOR: Aphrodicez
    SCHOOL: RYW
*/

#include <bits/stdc++.h>
using namespace std;

double dp[10010];

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, m, i;
    double num, ans;

    cin >> n >> m;

    cout << n - (int)(m - 1) << endl;

    for (i = 1; i <= n; i++) {
        cin >> dp[i];
        dp[i] += dp[i - 1];
        if (i < m)
            continue;
        ans = (dp[i] - dp[i - m]) / m;
        printf("%.6lf ", ans);
    }

    return 0;
}
