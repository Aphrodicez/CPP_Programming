/*
    TASK:
    LANG: CPP
    AUTHOR: Aphrodicez
    SCHOOL: RYW
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, minn = 2e9, maxx = -2e9, n, num;
    scanf("%d", &n);
    scanf("%d", &num);
    minn = num, maxx = num;
    for (i = 1; i < n; i++) {
        scanf("%d", &num);
        if (maxx < num) maxx = num;
        if (minn > num) minn = num;
    }
    printf("%d\n%d", maxx, minn);
    return 0;
}
