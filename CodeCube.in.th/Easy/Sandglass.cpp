/*
    TASK: Sandglass
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
    int n, i, j;
    cin >> n;
    if (n % 2 == 0) {
        cout << "error";
    }
    else {
        for (i = 1; i <= n / 2; ++i) {
            for (j = 1; j <= n; ++j) {
                if (j >= i && j <= n - i + 1)
                    cout << "*";
                else
                    cout << " ";
            }
            cout << endl;
        }
        for (j = 1; j <= n; ++j) {
            if (j == n / 2 + 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
        for (i = 1; i <= n / 2; ++i) {
            for (j = 1; j <= n; ++j) {
                if (j >= n / 2 - i + 1 && j <= n / 2 + i + 1)
                    cout << "*";
                else
                    cout << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
