/*
    TASK    : Skocimis
    LANG    : CPP
    AUTHOR  : Aphrodicez
    SCHOOL  : RYW
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, lena, lenb;
    cin >> a >> b >> c;
    lena = b - a;
    lenb = c - b;
    cout << max(lena, lenb) - 1;
    return 0;
}
