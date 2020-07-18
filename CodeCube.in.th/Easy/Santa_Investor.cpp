/*
    TASK: Santa Investor
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

    int n, num, i;
    int best_without = 0, best_with = -(1e9 + 5);

    cin >> n;

    for (i = 0; i < n; i++) {
        cin >> num;
        best_with = max(best_with, best_without - num);
        best_without = max(best_without, best_with + num);
    }
    cout << best_without;
    return 0;
}
