/*
    TASK: Watermelon
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

    int w;
    cin >> w;
    if (w < 4) {
        cout << "NO";
        return 0;
    }
    w -= 2;
    if (w % 2)
        cout << "NO";
    else
        cout << "YES";
    return 0;
}
