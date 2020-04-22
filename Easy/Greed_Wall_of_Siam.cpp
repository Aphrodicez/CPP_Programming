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
    long long ans = 0, n, i, GCD, num, sum = 0;
    scanf("%lld %lld", &n, &GCD);
    sum += GCD;
    for (i = 1; i < n; i++) {
        scanf("%lld", &num);
        sum += num;
        GCD = gcd(GCD, num);
    }
    ans = sum / GCD;
    printf("%lld", ans);
    return 0;
}
