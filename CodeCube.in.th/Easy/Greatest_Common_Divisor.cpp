/*
    TASK:
    LANG: CPP
    AUTHOR: Aphrodicez
    SCHOOL: RYW
*/

#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b) {
    if (a == 0)
        return b;
    if (b == 0)
        return a;
    if (a % b == 0)
        return b;
    else
        return gcd(b, a % b);
}

int main()
{
    long long a, b, ans;
    scanf("%lld %lld", &a, &b);
    ans = gcd(a, b);
    printf("%lld", ans);
    return 0;
}
