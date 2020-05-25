/*
    TASK: A - Welcome to 2017
    LANG: CPP
    AUTHOR: Aphrodicez
    SCHOOL: RYW
*/

#include <bits/stdc++.h>
using namespace std;

int mark[4001];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, i, j, num;
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> num;
        mark[num]++;
    }
    for (i = 2017, j = 2017; i <= 4000 || j >= 0; i++, j--) {
        if (j >= 0 && mark[j] == 1) {
            cout << j;
            return 0;
        }
        if (i <= 4000 && mark[i] == 1) {
            cout << i;
            return 0;
        }
    }
    cout << -1;
    return 0;
}
