/*
    TASK: Flip the Cards (Small)
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

    int n, m, v, i;

    cin >> n >> m;

    for (i = 1; i <= n; i++)
        cin >> a[i] >> b[i];

    while (m--) {
        cin >> v;
        for (i = 1; i <= n; i++) {
            if (a[i] <= v)
                swap(a[i], b[i]);
        }
    }

    for (i = 1; i <= n; i++) {
        cout << a[i] << endl;
    }

    return 0;
}
