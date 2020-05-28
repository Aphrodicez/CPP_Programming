/*
    TASK: Mango Encryption
    LANG: CPP
    AUTHOR: Aphrodicez
    SCHOOL: RYW
*/

#include <bits/stdc++.h>
using namespace std;

char s[1000010], m[1000010];
int ans[1000010];

int main()
{
    cin >> s >> m;
    int lens = strlen(s), lenm = strlen(m), Difference, i, ch = 0;
    if (lens != lenm) {
        cout << "R.I.P.";
        return 0;
    }
    for (i = 0; i < lens; i++) {
        s[i] = toupper(s[i]);
        m[i] = toupper(m[i]);
        Difference = (s[i] - m[i] + 26) % 26;
        if (Difference > 9) {
            ch = 1;
            break;
        }
        ans[i] = Difference;
    }
    if (ch)
        cout << "R.I.P.";
    else {
        for (i = 0; i < lens; i++) {
            cout << ans[i];
        }
    }
    return 0;
}
