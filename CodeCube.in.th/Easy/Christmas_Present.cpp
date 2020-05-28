/*
    TASK: Christmas Present
    LANG: CPP
    AUTHOR: Aphrodicez
    SCHOOL: RYW
*/

#include <bits/stdc++.h>
using namespace std;

int a[1010], b[1010];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, m, i, x, y, z, ans;
    cin >> n >> m;
    a[0] = b[0] = 1e9;
    for (i = 1; i <= n; i++)
        cin >> a[i];
    for (i = 1; i <= m; i++)
        cin >> b[i];
    sort(a, a + n + 1);
    sort(b, b + m + 1);
    x = a[0] + a[1];
    y = a[0] + b[0] + 100;
    z = b[0] + b[1];
    ans = min(x, min(y, z));
    cout << ans;
    return 0;
}
