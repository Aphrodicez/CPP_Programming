/*
    TASK: Bomb Tower
    LANG: CPP
    AUTHOR: Aphrodicez
    SCHOOL: RYW
*/

#include <bits/stdc++.h>
using namespace std;

int isPrime(int n) {
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int i, n, bomb, use = 0;
    scanf("%d %d", &n, &bomb);
    if (n < 2) {
        ///NO PRIME
        printf("0\n");
        return 0;
    }
    /// NUMBER : 2
    use++;
    /// FIND PRIME
    for (i = 3; i <= n; i += 2) {
        if (isPrime(i) == 1)
            use++;
    }
    /// IF ENOUGH
    if (bomb >= use)
        printf("0\n");
    else
        printf("%d\n", use - bomb);
    return 0;
}
