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
    int n, i, j;
    scanf("%d", &n);
    for (i = 0; i < n / 2; i++) {
        for (j = 0; j < n / 2 - i; j++)
            printf("-");

        for (j = 0; j < i * 2 + 1; j++)
            printf("*");

        for (j = 0; j < n / 2 - i; j++)
            printf("-");

        printf("\n");
    }
    for (i = 0; i < n; i++)
        printf("*");
    printf("\n");

    for (i = 0; i < n / 2; i++) {
        for (j = 0; j < i + 1; j++)
            printf("-");

        for (j = 0; j < n - i * 2 - 2; j++)
            printf("*");

        for (j = 0; j < i + 1; j++)
            printf("-");

        printf("\n");
    }
    return 0;
}
