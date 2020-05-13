/*
    TASK: Sum of Round Numbers
    LANG: CPP
    AUTHOR: Aphrodite
    SCHOOL: RYW
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int t, n;
    vector <int> ans;
    cin >> t;
    while (t--) {
        int digit = 10, k = 0;
        cin >> n;
        while (n > 0) {
            if (n % digit) {
                ans.push_back(n % digit);
                k++;
            }
            n -= n % digit;
            digit *= 10;
        }

        cout << k << endl;

        for (int x : ans)
            cout << x << " ";

        cout << endl;
        ans.clear();
    }

    return 0;
}
