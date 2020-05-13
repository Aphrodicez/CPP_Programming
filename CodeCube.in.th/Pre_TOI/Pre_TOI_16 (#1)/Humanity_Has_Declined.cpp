/*
    TASK:
    LANG: CPP
    AUTHOR: Aphrodicez
    SCHOOL: RYW
*/

#include <bits/stdc++.h>
using namespace std;

int a[200010];
int count_Number[200010];
int right_Border[200010];

void solve(int n, int k) {

    int l = n, r = n, cnt = 0, i;
    while (l > 0) {

        if (a[l] <= k) {
            if (!count_Number[a[l]])
                cnt++;
            count_Number[a[l]]++;
        }

        while (cnt == k) {
            if (a[r] <= k && count_Number[a[r]] == 1)
                break;
            count_Number[a[r]]--;
            r--;
        }

        if (cnt == k)
            right_Border[l] = r;
        else
            right_Border[l] = 1e9;
        l--;
    }
}

int main()
{
    int n, k, q, l, r;

    int i, j;

    scanf("%d %d %d", &n, &k, &q);

    for (i = 1; i <= n; i++)
        scanf("%d", &a[i]);

    solve(n, k);

    while (q--) {

        scanf("%d %d", &l, &r);

        if (right_Border[l] > r)
            printf("NO\n");

        else
            printf("YES\n");
    }
    return 0;
}
