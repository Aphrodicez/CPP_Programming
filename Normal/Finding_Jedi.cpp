/*
    TASK:
    LANG: CPP
    AUTHOR: Aphrodicez
    SCHOOL: RYW
*/

#include <bits/stdc++.h>
using namespace std;

long long a[1000010];

int main()
{
    long long n, m, sum = 0, i, num;
    scanf("%lld %lld", &n, &m);
    for (i = 0; i < n; i++) {
        scanf("%lld", &num);
        a[num]++;
    }
    for (i = 0; i <= m / 2; i++) {
        if (a[i] == 0 || a[m - i] == 0)
            continue;
        /// nCr = n! / (n-r)! r!
        ///     = n! / (n-2)! 2!
        ///     = n * (n-1) / 2!;
        if (i == m - i)
            sum += (a[i] * (a[i] - 1)) / 2;
        else
            sum += a[i] * a[m - i];
        a[i] = a[m - i] = 0;
    }
    printf("%lld", sum);
    return 0;
}
