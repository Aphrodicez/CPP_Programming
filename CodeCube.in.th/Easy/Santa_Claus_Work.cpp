/*
    TASK: Santa Clause Work
    LANG: CPP
    AUTHOR: Aphrodicez
    SCHOOL: RYW
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base :: sync_with_stdio(0);
    cin.tie(0);
    long long n, ans = 1, i;
    cin >> n;
    for(i=0; i<n; i++){
        ans *= 4;
    }
    cout << ans;
    return 0;
}
