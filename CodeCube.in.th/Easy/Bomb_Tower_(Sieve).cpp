/*
    TASK: Bomb Tower (Sieve)
    LANG: CPP
    AUTHOR: Aphrodicez
    SCHOOL: RYW
*/

#include <bits/stdc++.h>
using namespace std;

int a[500010];

int main()
{
    int n, i, j, use = 0, bomb;
    scanf("%d %d", &n, &bomb);
    if (n < 2) {
        printf("0\n");
        return 0;
    }
    a[2] = 1;
    use++;
    /// number 2
    for (i = 3; i * i <= n; i += 2) {
        /// IF NOT PRIME DON'T COUNT
        if (a[i]) continue;
        /// MARK NON-PRIME
        for (j = i * i; j <= n; j += i)
            a[j] = 1;
    }
    for (i = 3; i <= n; i += 2) {
        ///Count Prime
        if (!a[i])
            use++;
    }
    if (bomb >= use)
        printf("0\n");
    else
        printf("%d", use - bomb);
    return 0;
}
