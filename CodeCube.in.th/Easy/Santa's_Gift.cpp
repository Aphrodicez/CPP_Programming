/*
    TASK: Santa's Gift
    LANG: CPP
    AUTHOR: Aphrodicez
    SCHOOL: RYW
*/

#include <bits/stdc++.h>
using namespace std;

char a[1010], b[1010];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> a >> b;

    int lena = strlen(a), lenb = strlen(b);

    if (lena != lenb)
        cout << max(lena, lenb);

    if (lena == lenb) {
        if (!strcmp(a, b))
            cout << -1;
        else
            cout << lena;
    }

    return 0;
}
