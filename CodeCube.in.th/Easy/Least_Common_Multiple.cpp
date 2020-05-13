/*
    TASK: Least Common Multiple
    LANG: CPP
    AUTHOR: Aphrodicez
    SCHOOL: RYW
*/

#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b){
    if(a==0)
        return b;
    if(b==0)
        return a;
    if (a % b == 0)
        return b;
    else
        return gcd(b, a % b);
}

int main()
{
    long long a, b, ans, GCD;
    scanf("%lld %lld", &a, &b);
    ///
    GCD = gcd(a, b);
    ans = (a * b) / GCD;
    ///
    printf("%lld",ans);
    return 0;
}
