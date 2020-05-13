/*
    TASK: Mini Contest
    LANG: CPP
    AUTHOR: Aphrodicez
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;

void leftToRight(int l, int r);
void rightToLeft(int l, int  r);

char a[100010];

int main()
{
    ///DON'T HAVE NO SOLUTION CASE
    int n, i;
    int l = -1, r; /// l = left, r = right

    scanf("%d", &n);
    scanf("%s", a);

    for (i = 0; i < n; i++) {
        if (a[i] == 'X')
            continue;
        rightToLeft(l, i);
        l = i;
    }
    ///IF NO RIGHT BORDER
    if (a[n - 1] == 'X')
        leftToRight(l, n - 1);
    ///
    printf("%s", a);
    ///
    return 0;
}
///
void leftToRight(int l, int r) {
    int i;
    for (i = l + 1; i <= r; i++) {
        if (i == 0) {
            a[i] = 'B';
            continue;
        }
        if (a[i] != 'X')
            continue;
        if (a[i - 1] == 'B')
            a[i] = 'W';
        else
            a[i] = 'B';
    }
    return;
}
void rightToLeft(int l, int r) {
    int i;
    for (i = r - 1; i >= l + 1; i--) {
        if (a[i] != 'X')
            break;
        if (i == 0) {
            if (a[i + 1] == 'B')
                a[i] = 'W';
            else
                a[i] = 'B';
        }
        if (a[i - 1] == 'B' && a[i + 1] == 'W')
            a[i] = 'G';
        else if (a[i - 1] == 'W' && a[i + 1] == 'B')
            a[i] = 'G';
        else {
            if (a[i + 1] == 'B')
                a[i] = 'W';
            else
                a[i] = 'B';
        }
    }
    return;
}
