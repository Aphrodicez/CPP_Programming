/*
    TASK: Balanced Array
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

    int t, n;
    cin >> t;
    while (t--) {
        int i, sum = 0;
        cin >> n;
        if (n % 4)
            cout << "NO" << endl;
        else {
            cout << "YES" << endl;
            for (i = 1; i <= n / 2; i++) {
                sum += i * 2;
                cout << i * 2 << " ";
            }
            for (i = 0; i < n / 2 - 1; i++) {
                sum -= i * 2 + 1;
                cout << i * 2 + 1 << " ";
            }
            cout << sum << endl;
        }
    }

    return 0;
}
