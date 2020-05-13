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
    long long n, ans, num, i;
    scanf("%lld %lld", &n, &ans);
    for (i = 1; i < n; i++) {
        scanf("%lld", &num);
        ans = ans * num / gcd(ans, num);
    }
    printf("%lld", ans);
    return 0;
}
