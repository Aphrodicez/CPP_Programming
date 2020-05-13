/*
    TASK: Phoenix and Balance
    LANG: CPP
    AUTHOR: Aphrodicez
    SCHOOL: RYW
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int t, n, i;
    cin >> t;
    while (t--) {
        cin >> n;
        int left_Pile = 1 << (n - 1), right_Pile = 1 << n;

        for (i = 1; i < n / 2; i++)
            right_Pile += (1 << i);

        for (i = n / 2; i < n - 1; i++)
            left_Pile += (1 << i);

        cout << right_Pile - left_Pile << endl;
    }

    return 0;
}
