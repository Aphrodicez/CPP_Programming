/*
    TASK    : Word
    LANG    : CPP
    AUTHOR  : Aphrodicez
    SCHOOL  : RYW
*/
#include<bits/stdc++.h>
using namespace std;

char a[30][30];
int len, ch = 0, r, c;
int di[] = { -1,-1,-1,0,0,1,1,1 }, dj[] = { -1,0,1,-1,1,-1,0,1 };
string s;

void play(int i, int j, int state, int dir) {
    int ii, jj;
    if (ch)
        return;
    if (state == len - 1) {
        ch = 1;
        return;
    }
    ii = i + di[dir], jj = j + dj[dir];
    if (ii >= r || jj >= c || ii < 0 || jj < 0)
        return;
    if (a[ii][jj] != s[state + 1])
        return;
    play(ii, jj, state + 1, dir);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int i, j, q, dir;
    char now, start;

    cin >> r >> c;
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            cin >> now;
            a[i][j] = toupper(now);
        }
    }
    cin >> q;
    while (q--) {
        ch = 0;
        cin >> s;
        len = s.size();
        for (i = 0; i < len; i++)
            s[i] = toupper(s[i]);
        start = s[0];
        for (i = 0; i < r; i++) {
            for (j = 0; j < c; j++) {
                if (a[i][j] == start) {
                    for (dir = 0; dir < 8 && ch <= 0; dir++)
                        play(i, j, 0, dir);
                }
                if (ch) {
                    cout << i << " " << j << "\n";
                    break;
                }
            }
            if (ch)
                break;
        }
    }
    return 0;
}
